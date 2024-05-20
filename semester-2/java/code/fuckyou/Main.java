package fuckyou;

public class Main {

    static Rectangle rect1 = new Rectangle(2, 4);
    static Square square1 = new Square(3);

    public static void main(String[] args) {
        System.out.println(rect1.calculateArea());
        System.out.println(square1.calculateArea());
    }
}
