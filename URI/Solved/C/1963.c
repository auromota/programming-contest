/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    float a, b, c;
    scanf("%f %f", &a, &b);
    b=(b-a)*100.0/a;
    printf("%.2f%%\n", b);
    return 0;
}
