/*
	Author: Auro Mota <auro@blueorc.com>
*/

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		double A = Double.parseDouble(s.next());
		A *= A * 3.14159;
		System.out.printf("A=%.4f\n", A);
	}

}
