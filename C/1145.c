/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int a, b,i, j,cont=1;
    scanf("%d%d",&a,&b);
    while(cont<=b) {
        if(cont%a==0) printf("%d\n", cont);
        else printf("%d ", cont);
        cont++;
    }
    return 0;
}
