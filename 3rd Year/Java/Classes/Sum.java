//! Method Overloading
public class Sum {
    public int Math(int x, int y) {
        return (x + y);
    }

    public int Math(int x, int y, int z) {
        return (x + y - z);
    }

    public double Math(double x, double y) {
        return (x * y);
    }

    public static void main(String args[]) {
        Sum s = new Sum();
        System.out.println(s.Math(10, 20));
        System.out.println(s.Math(10, 20, 30));
        System.out.println(s.Math(10.5, 20.5));
    }
}