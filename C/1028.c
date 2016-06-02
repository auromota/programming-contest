/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    while(n>0) {
        int a, b, c, divisor, dividendo;
        scanf("%d%d",&a,&b);
        if(a>b) {
            dividendo=b;
            divisor=a;
        } else {
            dividendo=a;
            divisor=b;
        }
        while(dividendo%divisor!=0) {
            c=dividendo%divisor;
            dividendo=divisor;
            divisor=c;
        }
        printf("%d\n", c);
        n--;
    }
    return 0;
}
