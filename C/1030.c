/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int fun(int n, int k) {
    if(n==1) return 1;
    return ((fun(n-1,k)+k-1)%(n))+1;
}

int main() {
    int a, i, n, s;
    scanf("%d", &a);
    for(i=1;i<=a;i++) {
        scanf("%d%d", &n, &s);
        printf("Case %d: %d\n", i, fun(n,s));
    }
    return 0;
}
