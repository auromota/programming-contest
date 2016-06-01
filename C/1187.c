/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    double a[12][12];
    char op;
    int i, j;
    scanf(" %c", &op);
    double som=0;
    for(i=0;i<12;i++) {
        for(j=0;j<12;j++) {
            scanf("%lf",&a[i][j]);
            if(i<5) {
                if(j>i&&j<11-i) som+=a[i][j];
            }
        }
    }
    if(op=='S') printf("%.1lf\n", som);
    else printf("%.1lf\n", som/30);
    return 0;
}
