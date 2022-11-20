import java.util.Scanner;

public class SumOfDigits {
    public static void main(String args[]) {
        int num, digit, sum = 0;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number: ");
        num = sc.nextInt();

        while (num > 0) {
            digit = num % 10; // find the last digit of the number
            sum += digit; // adds last digit to the var=sum
            num /= 10; // removes the last digit from the number
        }
        System.out.println("Sum of digits: " + sum);

    }
}
