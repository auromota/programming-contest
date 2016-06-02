/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    char a[100];
    scanf(" %[^\n]", a);
    double b, c;
    scanf("%lf %lf", &b, &c);
    printf("TOTAL = R$ %.2lf\n", b+c*0.15);
    return 0;
}
