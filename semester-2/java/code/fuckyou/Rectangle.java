package fuckyou;

public class Rectangle {
    protected double height;
    protected double width;

    public Rectangle(){}

    public Rectangle(double width, double height){
        this.width = width;
        this.height = height;
    }

    public double calculateArea() {
        return this.width * this.height;
    }


    //--------------------------------------------------------------------

    public double getHeight() {
        return this.height;
    }

    public void setHeight(double height) {
        this.height = height;
    }

    public double getWidth() {
        return this.width;
    }

    public void setWidth(double width) {
        this.width = width;
    }


}
