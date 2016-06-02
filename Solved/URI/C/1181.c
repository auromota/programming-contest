/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int b;
    scanf("%d",&b);
    float a[12][12];
    char op;
    int i, j;
    scanf(" %c",&op);
    for(i=0;i<12;i++) {
        for(j=0;j<12;j++) {
            scanf("%f",&a[i][j]);
        }
    }
    float som=0;
    for(j=0;j<12;j++) {
        som+=a[b][j];
    }
    if(op=='S') printf("%.1f\n", som);
    else printf("%.1f\n", som/12.0);
    return 0;
}
