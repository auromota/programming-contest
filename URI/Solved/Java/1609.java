/*
	Author: Auro Mota <auro@blueorc.com>
*/

import java.util.Scanner;

public class Main {
	public static void main(String args[]) {
		Scanner input = new Scanner(System.in);
		int t = input.nextInt(), n, cont, i, j;
		boolean flag = false;
		for (t = t; t > 0; t--) {
			cont = 0;
			n = input.nextInt();
			int[] vet = new int[n];
			for (i = 0; i < n; i++) {
				vet[i] = input.nextInt();
				flag = true;
				j = 0;
				while (j < i) {
					if (vet[i] == vet[j]) {
						flag = false;
						break;
					}
					j++;
				}
				if (flag == true) {
					cont++;
				}
			}
			System.out.println(cont);
		}

	}
}
