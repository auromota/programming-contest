/*
	Author: Auro Mota <auro@blueorc.com>
*/

import java.util.Scanner;

public class Main {
	public static void main(String args[]) {
		Scanner input = new Scanner(System.in);
		int a;
		while (input.hasNextInt()) {
			a = input.nextInt();
			for (int i = 0; i < a; i++) {
				for (int j = 0; j < a; j++) {
					if (i == j) {
						if (a % 2 == 1) {
							if (i == (a - 1) / 2)
								System.out.printf("2");
							else
								System.out.printf("1");
						} else
							System.out.printf("1");
					} else {
						if (a - 1 == i + j)
							System.out.printf("2");
						else
							System.out.printf("3");
					}
				}
				System.out.printf("\n");
			}
		}
	}
}
