/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int a, i;
    scanf("%d", &a);
    printf("1\n");
    for(i=2;i<a;i++) {
        if(a%i==0) printf("%d\n", i);
    }
    printf("%d\n", a);
    return 0;
}
