public class Bitwise_Operators {/* These Operators are usally not used in java */
    public static void main(String[] args) {
        int a = 10, b = 2;
        System.out.println("A: 1010 = " + a + "\nB: 0010 = " + b);

        System.out.println("\nAND: 0010 = " + (a & b));
        System.out.println("\nOR: 1010 = " + (a | b));
        System.out.println("\nXOR: 1000 = " + (a ^ b));

        System.out.println("\nComplement of A: " + (~a) + " B: " + (~b));// If a = 10 then result should be -11
                                                                         // If a = -10 then the result should be 9.
        System.out.println();

        System.out.println("\n<<: 10*(2**12) = " + (a << b)); // a*2**b
        System.out.println("\n>>: 10/(2**12)  = " + (a >> b)); // a/2**b

    }
}
