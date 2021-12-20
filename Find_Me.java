
// import java.io.*;
import java.util.Scanner;

/**
 * Find_Me
 */
public class Find_Me {

    public static void main(String[] args) {
        int n, k;
        Scanner sc = new Scanner(System.in);

        n = sc.nextInt();
        k = sc.nextInt();

        int arr[] = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        boolean flag = false;
        for (int i = 0; i < n; i++) {
            if (arr[i] == k) {
                flag = true;
                break;
            }
        }
        if (flag) {
            System.out.print(1);
        } else
            System.out.print(-1);

        sc.close();
    }
}