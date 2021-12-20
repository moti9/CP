import java.util.Scanner;

/**
 * Reverse_The_Number
 */

class Reverse_The_Number {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int tt, n;
        tt = sc.nextInt();
        while (tt > 0) {
            n = sc.nextInt();
            int temp = 0;
            while (n != 0) {
                temp = temp * 10 + (n % 10);
                n /= 10;
            }
            System.out.println(temp);
            tt--;
        }

        sc.close();
    }
}