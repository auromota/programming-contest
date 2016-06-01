/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

long long int fatorial(int a) {
    if(a==1) return 1;
    else return a*fatorial(a-1);
}

int main() {
    int a;
    scanf("%d",&a);
    printf("%lld\n", fatorial(a));
    return 0;
}
