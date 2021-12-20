import java.util.Scanner;

/**
 * Life_the_Universe_and_Everything
 */
class Life_the_Universe_and_Everything {

    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        while (true) {
            n = sc.nextInt();
            if (n == 42) {
                break;
            }
            System.out.println(n);
        }

        sc.close();
    }
}