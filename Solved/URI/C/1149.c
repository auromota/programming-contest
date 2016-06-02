/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int a, b, i;
    scanf("%d %d", &a, &b);
    int sum=a;
    while(b<=0) scanf("%d", &b);
    for(i=1;i<b;i++) {
        a++;
        sum+=a;
    }
    printf("%d\n", sum);
    return 0;
}
