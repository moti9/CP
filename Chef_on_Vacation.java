import java.util.Scanner;

/**
 * Chef_on_Vacation
 */
class Chef_on_Vacation {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int tt;
        tt = sc.nextInt();
        while (tt-- != 0) {

            int x, y, z;
            x = sc.nextInt();
            y = sc.nextInt();
            z = sc.nextInt();

            if (x + y <= z) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }

        sc.close();
    }

}