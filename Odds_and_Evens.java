import java.util.Scanner;

/**
 * Odds_and_Evens
 */
class Odds_and_Evens {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int tt = sc.nextInt();
        while (tt-- != 0) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            if ((a + b) % 2 == 1) {
                System.out.println("Alice");
            } else {
                System.out.println("Bob");
            }
        }

        sc.close();
    }
}