public class LargestInArray {
    public static int GetLargest(int[] a, int total) {
        int temp;
        for (int i = 0; i < total; i++) {
            for (int j = i + 1; j < total; j++) {
                if (a[i] > a[j]) {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        return a[total - 1];
    }

    public static void main(String args[]) {
        int a[] = { 1, 2, 3, 4, 15, 6 };
        System.out.println("Largest: " + GetLargest(a, 6));
    }
}