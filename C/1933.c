/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
    printf("%d\n", a==b?a:a>b?a:b);
    return 0;
}
