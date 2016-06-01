/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int i;
    for(i=0;i<10;i++) {
        printf("N[%d] = %d\n", i, a);
        a*=2;
    }
    return 0;
}
