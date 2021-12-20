import java.util.Scanner;

/**
 * Sum_Is_Everywhere
 */
class Sum_Is_Everywhere {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n;
        n = sc.nextLong();

        long ao = 1;
        long aon = ao + (n - 1) * 2;

        long ae = 2;
        long aen = ae + (n - 1) * 2;

        long oo = n * (ao + aon) / 2;

        long ee = n * (ae + aen) / 2;

        System.out.print(oo + " " + ee);

        sc.close();
    }
}