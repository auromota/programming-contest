/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    float a[12][12];
    char op;
    int i, j;
    scanf("%c", &op);
    float som=0;
    for(i=0;i<12;i++) {
        for(j=0;j<12;j++) {
            scanf("%f",&a[i][j]);
            if(j<11-i) som+=a[i][j];
        }
    }
    if(op=='S') printf("%.1f\n", som);
    else printf("%.1f\n", som/66);
    return 0;
}
