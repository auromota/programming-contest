/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int b, c;
    int a, i;
    scanf("%d", &a);
    for(i=0;i<a;i++) {
         scanf("%d%d",&b,&c);
         b*=c;
         b/=2;
         printf("%d cm2\n", b);
    }
    return 0;
}
