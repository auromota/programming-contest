/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int n, h=0, m=0;
    scanf("%d",&n);
    while(n>=3600) {
        h++;
        n-=3600;
    }
    while(n>=60) {
        m++;
        n-=60;
    }
    printf("%d:%d:%d\n",h,m,n);
    return 0;
}
