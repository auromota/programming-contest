/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int x, i, sum;
    while(1) {
        scanf("%d", &x);
        if(x==0) break;
        if(x%2==0) sum=x;
        else {
            x++;
            sum=x;
        }
        x+=2;
        for(i=0;i<4;i++) {
            sum+=x;
            x+=2;
        }
        printf("%d\n", sum);
    }
    return 0;
}
