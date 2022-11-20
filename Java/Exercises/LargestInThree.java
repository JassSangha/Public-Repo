public class LargestInThree {
    public static void main(String args[]) {
        int a = 10, b = 11, c = 15;
        int temp = a > b ? a : b;
        int largest = c > temp ? c : temp;
        System.out.println("Largest: " + largest);
    }
}
