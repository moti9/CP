import java.util.Scanner;
// import java.util.Vector;
import java.util.Arrays;

/**
 * Smart_Phone
 */
class Smart_Phone {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        long a[] = new long[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        Arrays.sort(a);
        // Vector<Integer> v = new Vector<>();
        for (int i = 0; i < n; i++) {
            a[i] = a[i] * (n - i);
        }
        long maxx = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] > maxx) {
                maxx = a[i];
            }
        }
        // Arrays.sort(a);
        System.out.print(maxx);

        sc.close();
    }
}