/*
	Author: Auro Mota <auro@blueorc.com>
*/

import java.util.Scanner;
import java.util.Arrays;
import java.math.*;

public class Main {

	public static int mdc(int a, int b) {
		int r;
		while (b != 0) {
			r = a % b;
			a = b;
			b = r;
		}
		return a;
	}

	public static void main(String args[]) {
		Scanner input = new Scanner(System.in);
		int[] a = new int[3];
		int i;
		boolean pit, pri;
		while (input.hasNextInt()) {
			for (i = 0; i < 3; i++) {
				a[i] = input.nextInt();
			}
			Arrays.sort(a);
			System.out.printf("tripla");
			pit = false;
			pri = false;
			if (a[2] * a[2] == a[1] * a[1] + a[0] * a[0])
				pit = true;
			if (pit == true) {
				System.out.printf(" pitagorica");
				if (mdc(mdc(a[0], a[1]), a[2]) == 1)
					System.out.printf(" primitiva");
			}
			System.out.printf("\n");
		}
	}
}
