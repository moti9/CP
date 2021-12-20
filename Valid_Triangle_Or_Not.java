// import java.io.*;
import java.util.Scanner;

/**
 * Valid_Triangle_Or_Not
 */
class Valid_Triangle_Or_Not {

    public static void main(String[] args) {
        int a,b,c;
        Scanner in=new Scanner(System.in);
        a=in.nextInt();
        b=in.nextInt();
        c=in.nextInt();

        if (a+b<c || b+c<a || c+a<b) {
            System.out.print("YES");
        }
        else{
            System.out.print("NO");
        }

        in.close();
    }
    
}
