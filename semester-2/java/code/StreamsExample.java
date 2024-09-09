import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;


class StreamsExample {

    public static String doSomething(String s) {
        return s + "lol";
    }


    public static void main(String[] args) {
        List<String> myList = new ArrayList<>();
        for(int i = 0; i < 10; i++) myList.add("" + i);

        myList.stream()
            .map(a -> Integer.valueOf(a))
            .reduce((a, b) -> a + b)
            .ifPresent(System.out::println);

        System.out.println("-----");
        myList.stream()
            .map(string -> "1" + string) // add "1" to the beginning of each element
            .forEach(System.out::println); // print each element
        

        myList.stream()
            .map(string -> "2" + string)
            .map(StreamsExample::doSomething) // calls the static method doSomething
            .distinct() // removes duplicates
            .forEach(System.out::println);

    }
}