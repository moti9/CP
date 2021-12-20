import java.util.Scanner;

class Motiv {
	public static void main(String args[]) {
		Scanner in = new Scanner(System.in);

		int l = in.nextInt();
		int r = in.nextInt();

		for (int i = l; i <= r; i++) {
			if (i % 2 == 1) {
				System.out.print(i + " ");
			}
		}

		in.close();
	}
}
