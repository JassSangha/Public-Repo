public class Logical_Operators {
    public static void main(String[] args) {

        System.out.println("(5 > 3) && (8 > 5): " + ((5 > 3) && (8 > 5)));
        System.out.println("(5 > 3) && (8 < 5): " + ((5 > 3) && (8 < 5)));
        System.out.println();
        System.out.println("(5 < 3) || (8 > 5): " + ((5 < 3) || (8 > 5)));
        System.out.println("(5 > 3) || (8 < 5): " + ((5 > 3) || (8 < 5)));
        System.out.println("(5 < 3) || (8 < 5): " + ((5 < 3) || (8 < 5)));
        System.out.println();
        System.out.println("!(5 == 3): " + !(5 == 3));
        System.out.println("!(5 > 3): " + !(5 > 3));
    }
}
