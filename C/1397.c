/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int a, b, n, i, k, l;
    while(1) {
        scanf("%d", &n);
        if(n==0) break;
        k=0;
        l=0;
        for(i=0;i<n;i++) {
            scanf("%d %d", &a, &b);
            if(a>b) k++;
            if(b>a) l++;
        }
        printf("%d %d\n", k, l);
    }
    return 0;
}
