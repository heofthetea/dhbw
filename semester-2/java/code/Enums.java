
class Enums {
    public static void main(String[] args) {
        Colour blue = Colour.BLUE;
        System.out.println("Blue: " + Colour.values());
    }

    enum Colour {
        RED(255, 0, 0), GREEN(0, 255, 0), BLUE(0, 0, 255);

        private int r, g, b;

        Colour(int r, int g, int b) {
            this.r = r;
            this.g = g;
            this.b = b;
        }
    }
}