/*
	Author: Auro Mota <auro@blueorc.com>
*/

import java.util.Scanner;

public class Main {
	public static void main(String args[]) {
		Scanner input = new Scanner(System.in);
		int t = input.nextInt(), a, b;
		for (int i = 0; i < t; i++) {
			a = input.nextInt();
			b = input.nextInt();
			System.out.printf("%d\n", a + b);
		}
	}
}
