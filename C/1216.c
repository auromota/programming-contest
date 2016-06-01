/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    double a, soma=0, i=0;
    char b[100];
    while(scanf(" %[^\n]", b)!=EOF) {
         scanf("%lf", &a);
         soma+=a;
         i++;
    }
    printf("%.1lf\n", soma/i);
    return 0;
}
