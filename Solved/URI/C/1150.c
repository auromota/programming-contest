/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);
    while(1) {
        scanf("%d",&b);
        if(b>a) break;
    }
    int sum=a, cont=1;
    while(sum<b) {
        sum+=(a+cont);
        cont++;
    }
    printf("%d\n", cont);
    return 0;
}
