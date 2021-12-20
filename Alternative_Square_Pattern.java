import java.util.Scanner;

/**
 * Triangle_Everywhere
 */
/**
 * Alternative_Square_Pattern
 */
class Alternative_Square_Pattern {

    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();

        int temp;
        for (int i = 1; i <= n; i++) {
            int t = 5;
            if (i % 2 == 0) {
                temp = i * 5;
                while (t > 0) {
                    System.out.print(temp + " ");
                    temp--;
                    t--;
                }

            } else {
                temp = ((i - 1) * 5) + 1;
                while (t > 0 && temp <= (i * 5)) {
                    System.out.print(temp + " ");
                    temp++;
                    t--;
                }
            }

            System.out.println();
        }

        sc.close();
    }

}