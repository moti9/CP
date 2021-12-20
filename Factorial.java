import java.util.Scanner;

/**
 * Factorial
 */
class Factorial {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long tt = sc.nextInt();
        while (tt-- != 0) {
            long n = sc.nextInt();
            long ans = 0;
            for (long i = 5; i <= n; i *= 5) {
                ans += (n / i);
            }
            System.out.println(ans);
        }
        sc.close();
    }
}