/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int b, e;
    float c, f;
    scanf("%d%d%f", &b, &b, &c);
    scanf("%d%d%f", &e, &e, &f);
    printf("VALOR A PAGAR: R$ %.2f\n", b*c+e*f);
	return 0;
}
