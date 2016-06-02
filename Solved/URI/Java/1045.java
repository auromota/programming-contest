/*
	Author: Auro Mota <auro@blueorc.com>
*/

import java.util.Arrays;
import java.util.Scanner;

public class Main {
	public static void main(String args[]) {
		Scanner input = new Scanner(System.in);
		double[] a = new double[3];
		for (int i = 0; i < 3; i++) {
			a[i] = input.nextDouble();
		}
		Arrays.sort(a);
		double aux = a[2];
		a[2] = a[0];
		a[0] = aux;
		if (a[0] >= a[1] + a[2]) {
			System.out.println("NAO FORMA TRIANGULO");
		} else {
			if (a[0] * a[0] == a[1] * a[1] + a[2] * a[2]) {
				System.out.println("TRIANGULO RETANGULO");
			} else {
				if (a[0] * a[0] > a[1] * a[1] + a[2] * a[2]) {
					System.out.println("TRIANGULO OBTUSANGULO");
				} else {
					System.out.println("TRIANGULO ACUTANGULO");
				}
			}
		}
		if (a[0] == a[1] && a[0] == a[2]) {
			System.out.println("TRIANGULO EQUILATERO");
		} else if (a[0] == a[1] || a[0] == a[2] || a[1] == a[2]) {
			System.out.println("TRIANGULO ISOSCELES");
		}
	}
}
