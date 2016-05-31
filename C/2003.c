/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int h, m, t;
    while(scanf("%d", &h)!=EOF) {
        scanf(":%d", &m);
        t=0;
        h-=7;
        if(h>=0) {
            t=m+h*60;
        }
        printf("Atraso maximo: %d\n", t);
    }
    return 0;
}
