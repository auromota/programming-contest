/*
	Author: Auro Mota <auro@blueorc.com>
*/

import java.util.Scanner;

public class Main {

	public static void main(String args[]){
		Scanner input = new Scanner(System.in);
		int a = input.nextInt(), b = input.nextInt();
		a += b;
		System.out.printf("SOMA = %d\n", a);
	}
	
}
