/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int a, i;
    while(1) {
        scanf("%d", &a);
        if(a==0) break;
        for(i=1;i<a;i++) printf("%d ", i);
        printf("%d\n", a);
    }
    return 0;
}
