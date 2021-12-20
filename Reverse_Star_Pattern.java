/**
 * Reverse_Star_Pattern
 */
import java.util.Scanner;

class Reverse_Star_Pattern {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        n = sc.nextInt();
        for (int i = n; i > 0; i--) {
            for (int j = 1; j <= n; j++) {
                if (j < i) {
                    System.out.print(" ");
                } else {
                    System.out.print("*");
                }
            }
            System.out.println();
        }
        sc.close();
    }
}
// Scanner sc = new Scanner(System.in);
// int i = sc.nextInt();