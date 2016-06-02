/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int a, b, c, d;
    while(1) {
        scanf("%d%d%d%d",&a,&b,&c,&d);
        if(a==b&&b==c&&c==d&&d==0) break;
        if(a==c&&b==d) printf("0\n");
        else {
             if((a+b==c+d)||(a-b)==(c-d)||(a==c)||(b==d)) printf("1\n");
             else printf("2\n");
        }
    }
    return 0;
}
