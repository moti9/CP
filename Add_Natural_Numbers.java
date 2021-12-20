import java.util.Scanner;

/**
 * Add_Natural_Numbers
 */
class Add_Natural_Numbers {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        long n;
        n=sc.nextInt();

        long ans=n*(n+1)/2;

        System.out.print(ans);

        sc.close();
    }
    
}