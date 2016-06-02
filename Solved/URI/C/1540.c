/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>
#include <math.h>

int main() {
	int n, i;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
    	double a, b, c, d;
        scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
        double dif=d-b, difa=c-a;
        double n=dif/difa;
        double e=(dif*100)/difa;
        long long int f=floor(e);
        printf("%lld,%02d\n", f/100, f%100);
    }
    return 0;
}
