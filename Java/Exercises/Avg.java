public class Avg {
    public static void main(String args[]) {
        int arr[] = { 2, 4, 6, 8, 10 };
        int avg = 0, sum = 0;
        System.out.println("Elements of array:");
        for (int i = 0; i <= 4; i++) {
            System.out.println(arr[i] + "\t");
            sum += arr[i];
        }
        avg = sum / 5; // how to find elements in an array
        System.out.println("Sum: " + sum);
        System.out.println("Average: " + avg);
    }
}
