/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>
#include <math.h>

int main() {
    int n,d;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        double a=0;
        scanf("%d",&d);
        a=pow(2,d)-1;
        a=a/12000;
        long long int k=(long long int)floor(a);
        printf("%lld kg\n",k);
    }
    return 0;
}
