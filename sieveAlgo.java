import java.util.Arrays;
import java.util.Scanner;

/**
 * sieveAlgo
 */
public class sieveAlgo {
    static boolean isPrime[] = new boolean[1000001];

    static void SieveAlgo() {
        int maxN = 1000000;
        Arrays.fill(isPrime, 0, maxN, true);
        isPrime[0] = isPrime[1] = false;

        for (int i = 2; i * i <= maxN; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= maxN; j += i) {
                    isPrime[j] = false;
                }
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter your integer= ");
        int n = sc.nextInt();
        SieveAlgo();
        if (isPrime[n])
            System.out.println(n + " is a Prime integer");
        else
            System.out.println(n + " is a Non-prime integer");

        sc.close();
    }
}