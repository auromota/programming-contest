/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    long long int a, b;
    while(scanf("%lld%lld",&a,&b)!=EOF) {
    	long long int aux=b-a;
        if(aux<0) aux*=-1;
        printf("%lld\n",aux);
    }
    return 0;
}
