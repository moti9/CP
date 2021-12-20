import java.util.Scanner;

/**
 * Triangle_Everywhere
 */
public class Triangle_Everywhere {

    public static void main(String[] args) {
        int a, b, c;
        Scanner sc = new Scanner(System.in);
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();
        if (a + b > c && b + c > a && c + a > b) {
            if (a == b && b == c) {
                System.out.print(1);
            } else if (a == b || b == c || c == a) {
                System.out.print(2);
            } else {
                System.out.print(3);
            }
        } else {
            System.out.print(-1);
        }

        sc.close();
    }

}