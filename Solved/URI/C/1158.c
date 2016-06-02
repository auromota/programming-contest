/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int a, i;
    scanf("%d",&a);
    for(i=0;i<a;i++) {
        int x, y, j, sum=0;
        scanf("%d%d", &x, &y);
        if(x%2==0) x++;
        sum=x;
        for(j=1;j<y;j++) {
            x+=2;
            sum+=x;
        }
        printf("%d\n", sum);
    }
    return 0;
}
