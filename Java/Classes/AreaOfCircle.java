import java.io.*;

class AOC {
    // static double PI = Math.PI;

    static final double PI = Math.PI;

    AOC(double r) {
        double A = PI * r * r;
        System.out.println("(Double)Area of the circle is :" + A);
    }

    AOC(float r) {
        double A = PI * r * r;
        System.out.println("(Float)Area of the circle is :" + A);
    }
}

class AreaOfCircle {
    public static void main(String[] args) {
        AOC obj = new AOC();

        obj.AOC(5);
        obj.AOC(2.5);
    }
}