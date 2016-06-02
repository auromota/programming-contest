/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

long long int fatorial(int a) {
    if(!a) return 1;
    return a*fatorial(a-1);
}

int main() {
    int n, m;
    while(scanf("%d%d",&n,&m)!=EOF) {
    	printf("%lld\n", fatorial(n)+fatorial(m));
    }
    return 0;
}
