import java.util.Scanner;

/**
 * Triangle_With_Angle
 */
class Triangle_With_Angle {

    public static void main(String[] args) {
        int a, b, c;
        Scanner sc = new Scanner(System.in);
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();
        if ((a + b + c) == 180 && a > 0 && b > 0 && c > 0) {
            System.out.print("YES");
        } else {
            System.out.print("NO");
        }

        sc.close();
    }
}