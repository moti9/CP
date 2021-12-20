import java.util.Scanner;

/**
 * Carvans
 */
class Carvans {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int tt = sc.nextInt();
        while (tt-- != 0) {
            int n = sc.nextInt();
            int a[] = new int[n];
            for (int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
            }
            int minn = a[0], ct = 0;
            for (int i = 0; i < n; i++) {
                if (a[i] <= minn) {
                    ct++;
                    minn = a[i];
                }
            }
            System.out.println(ct);
        }

        sc.close();
    }
}