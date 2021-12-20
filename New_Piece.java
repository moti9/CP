import java.util.Scanner;

/**
 * New_Piece
 */
class New_Piece {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int tt;
        tt = sc.nextInt();
        while (tt-- != 0) {

            int a, b, c, d;
            a = sc.nextInt();
            b = sc.nextInt();
            c = sc.nextInt();
            d = sc.nextInt();

            if (a <= 8 && b <= 8 && c <= 8 && d <= 8) {
                if (a == c && b == d) {
                    System.out.println(0);
                } else if ((a + b) % 2 == (c + d) % 2) {
                    System.out.println(2);
                } else {
                    System.out.println(1);
                }
            }
        }

        sc.close();
    }
}