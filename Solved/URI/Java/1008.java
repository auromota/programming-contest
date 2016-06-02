/*
	Author: Auro Mota <auro@blueorc.com>
*/

import java.util.Scanner;

public class Main {

	public static void main(String args[]) {
		Scanner input = new Scanner(System.in);
		int a = input.nextInt(), h = input.nextInt();
		float v = Float.parseFloat(input.next());
		v *= h;
		System.out.println("NUMBER = " + a);
		System.out.printf("SALARY = U$ %.2f\n", v);
	}

}
