/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int a, i;
    scanf("%d", &a);
    if(a>0) printf("Ho");
    for(i=1;i<a;i++) printf(" Ho");
    printf("!\n");
    return 0;
}
