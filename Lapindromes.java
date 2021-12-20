// import java.lang.reflect.Array;
import java.util.Arrays;
import java.util.Scanner;

/**
 * Lapindromes
 */
class Lapindromes {

    public static String sortString(String s) {

        char chArr[] = s.toCharArray();
        Arrays.sort(chArr);

        return new String(chArr);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int tt;
        tt = sc.nextInt();

        while (tt > 0) {
            String s;
            s = sc.next();

            int[] f = new int[26];
            Arrays.fill(f, 0);

            for (int i = 0; i < s.length(); i++) {
                if (i < s.length() / 2) {
                    f[s.charAt(i) - 'a']++;
                } else if (i >= (s.length() + 1) / 2) {
                    f[s.charAt(i) - 'a']--;
                }
            }
            boolean flag = true;

            for (int i = 0; i < 26; i++) {
                if (f[i] > 0) {
                    flag = false;
                    break;
                }
                f[i] = 0;
            }
            if (flag) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }

            tt--;
        }

        sc.close();
    }
}