/*
	Author: Auro Mota <auro@blueorc.com>
*/

import java.util.Scanner;
import java.math.BigInteger;
import java.io.IOException;

public class Main {

	public static BigInteger fat(int a) {
		BigInteger fact = BigInteger.valueOf(1);
		for (int i = 1; i <= a; i++) {
			fact = fact.multiply(BigInteger.valueOf(i));
		}
		return fact;
	}

	public static void main(String args[]) throws IOException {
		Scanner input = new Scanner(System.in);
		String a;
		int i;
		int vetor[] = new int[26];
		while (input.hasNextLine()) {
			for (i = 0; i < 26; i++) {
				vetor[i] = 0;
			}
			a = input.nextLine();
			for (i = 0; i < a.length(); i++) {
				vetor[a.charAt(i) - 65]++;
			}
			BigInteger ana = fat(a.length());
			for (i = 0; i < 26; i++) {
				if (vetor[i] > 1) {
					ana = ana.divide(fat(vetor[i]));
				}
			}
			ana = ana.remainder(BigInteger.valueOf(1000000007));
			System.out.println(ana.longValue());
		}
	}
}
