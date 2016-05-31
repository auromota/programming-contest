/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int t, c=5, a, cont=0;
    scanf("%d", &t);
    while(c--) {
        scanf("%d",&a);
        if(a==t) cont++;
    }
    printf("%d\n", cont);
    return 0;
}
