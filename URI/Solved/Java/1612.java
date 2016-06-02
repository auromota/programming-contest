/*
	Author: Auro Mota <auro@blueorc.com>
*/

import java.util.Scanner;

public class Main {

	public static void main(String args[]) {
		Scanner input = new Scanner(System.in);
		int t = input.nextInt();
		int a;
		for (int k = 0; k < t; k++) {
			a = input.nextInt();
			if (a % 2 == 1)
				a++;
			a /= 2;
			System.out.printf("%d\n", a);
		}
	}
}
