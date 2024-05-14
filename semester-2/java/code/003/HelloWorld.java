public class HelloWorld {
	public static void main(String[] args) {
		System.out.println("Hello World");
		try {
			System.out.println(args[0]);
		} catch (Exception e) {
			System.out.println(" No arguments given");
		}
	}
}
