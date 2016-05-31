/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    float a, b, c;
    scanf("%f%f%f", &a,&b,&c);
    a*=0.2;
    b*=0.3;
    c/=2;
    printf("MEDIA = %.1f\n", a+b+c);
    return 0;
}
