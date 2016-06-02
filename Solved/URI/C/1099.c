/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int a, i, j, x, y, sum;
    scanf("%d",&a);
    for(i=0;i<a;i++) {
        sum=0;
        scanf("%d%d",&x,&y);
        if(x>y) {
            for(j=y+1;j<x;j++) {
                if(j%2==1) sum+=j;
            }
        } else {
            for(j=x+1;j<y;j++) {
                if(j%2==1) sum+=j;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
