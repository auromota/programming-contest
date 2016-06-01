/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int a, b, c, cont, i, flag=0;
    while(1) {
        scanf("%d %d", &a, &b);
        if(a==b&&b==0) break;
        cont=0;
        flag=0;
        c=b;
        while(c>0) {
        	b=c;
            cont=0;
            while(b>0) {
                i=b;
                while(i>0) {
                    cont+=b;
                    if(cont==a) {
                        flag=1;
                        break;
                    }
                    i--;
                }
                if(flag==1) break;
                b--;
            }
            if(flag==1) break;
            c--;
        }
        if(flag==1) printf("possivel\n");
        else printf("impossivel\n");
    }
    return 0;
}
