/*
	Author: Auro Mota <auro@blueorc.com>
*/

import java.util.Scanner;

public class Main {

	public static void main(String args[]) {
		Scanner input = new Scanner(System.in);
		input.next();
		int d, h, m, s;
		int dini = input.nextInt();
		int hini = input.nextInt();
		input.next();
		int mini = input.nextInt();
		input.next();
		int sini = input.nextInt();
		input.next();
		int dfin = input.nextInt();
		int hfin = input.nextInt();
		input.next();
		int mfin = input.nextInt();
		input.next();
		int sfin = input.nextInt();
		if (sini <= sfin) {
			s = sfin - sini;
		} else {
			mfin--;
			s = 60 + sfin - sini;
		}
		if (mini <= mfin) {
			m = mfin - mini;
		} else {
			hfin--;
			m = 60 + mfin - mini;
		}
		if (hini <= hfin) {
			h = hfin - hini;
		} else {
			dfin--;
			h = 24 + hfin - hini;
		}
		d = dfin - dini;
		System.out.printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", d, h, m, s);
	}
}
