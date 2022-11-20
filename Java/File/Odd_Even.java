import java.util.Scanner;

public class Odd_Even {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n;
        System.out.println("Enter an integer: ");
        n = sc.nextInt();

        System.out.println((n & 1) == 0 ? "Even number" : "Odd number");

    }
}
