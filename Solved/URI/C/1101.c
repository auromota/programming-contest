/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int a, b, i;
    while(1) {
        scanf("%d%d",&a,&b);
        if(a<=0||b<=0) break;
        int sum=0;
        if(a<b) {
            for(i=a;i<=b;i++) {
                printf("%d ", i);
                sum+=i;
            }
        } else {
            for(i=b;i<=a;i++) {
                printf("%d ", i);
                sum+=i;
            }
        }
        printf("Sum=%d\n",sum);
    }
    return 0;
}
