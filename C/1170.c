/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        float a;
        int d=0;
        scanf("%f", &a);
        while(a>1) {
            a/=2;
            d++;
        }
        printf("%d dias\n", d);
    }
    return 0;
}
