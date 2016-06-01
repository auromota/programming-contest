/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int t, i, a, f;
    long long int pa, pb;
    double ga, gb, aa, ab;
    scanf("%d", &t);
    for(i=0;i<t;i++) {
        f=0;
        a=0;
        scanf("%lld %lld %lf %lf", &pa, &pb, &ga, &gb);
        ga/=100;
        gb/=100;
        while(pa<=pb) {
            aa=(double) pa*ga;
            pa+=(long long int) aa;
            ab=(double) pb*gb;
            pb+=(long long int) ab;
            a++;
            if(a>100) {
                f=1;
                break;
            }
        }
        if(f==0) printf("%d anos.\n", a);
        else printf("Mais de 1 seculo.\n");
    }
    return 0;
}
