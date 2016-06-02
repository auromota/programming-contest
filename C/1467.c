/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int a, b, c;
    while(scanf("%d%d%d", &a, &b, &c)!=EOF)
		printf("%c\n",(a+b+c)%3==0?'*':'A'+(a==c)+2*(a==b));
    return 0;
}
