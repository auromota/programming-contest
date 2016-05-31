/*
	Author: Auro Mota <auro@blueorc.com>
*/

import java.util.Scanner;

public class Main {

	public static boolean isPrime(int n) {
		for (int i = 2; i < (n / 2) + 1; i++) {
			if (n % i == 0)
				return false;
		}
		return true;
	}

	public static void main(String args[]) {
		Scanner input = new Scanner(System.in);
		int it = input.nextInt();
		for (int i = 0; i < it; i++) {
			int n = input.nextInt();
			boolean a = isPrime(n);
			System.out.printf("%d ", n);
			if (a == false)
				System.out.printf("nao ");
			System.out.printf("eh primo\n");
		}
	}
}
