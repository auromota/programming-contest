/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int a, b, c, d;
    while(1) {
        scanf("%d%d%d%d",&a,&b,&c,&d);
        if(a==0&&b==0&&c==0&&d==0) break;
        if(c==a) {
            if(d>b) printf("%d\n",d-b);
            else printf("%d\n",1440-(b-d));
        } else {
            if(a>c) {
                if(d>b) printf("%d\n",(c+24-a)*60+(d-b));
                else printf("%d\n",(c+24-a)*60-(b-d));
            } else {
                if(d>b) printf("%d\n",(c-a)*60+d-b);
                else printf("%d\n",(c-a)*60-(b-d));
            }
        }
    }
    return 0;
}
