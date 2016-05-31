/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    float a, b;
    scanf("%f%f", &a, &b);
    a*=0.35;
    b*=0.75;
    printf("MEDIA = %.5f\n", (a+b)/1.1);
    return 0;
}
