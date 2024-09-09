package squares;


class Square extends Rectangle {

    public Square(double width) {
        super(width, width);
    }
    public Square(){}

    @Override
    public void setWidth(double width) {
        super.setWidth(width);
        super.setHeight(width);
    }

    @Override
    public void setHeight(double height) {
        super.setHeight(height);
        super.setWidth(height);
    }
    
    
}
