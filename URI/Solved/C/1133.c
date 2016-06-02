/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int a, b, i;
    scanf("%d %d", &a, &b);
    if(a>b) {
        int aux=a;
        a=b;
        b=aux;
    }
    for(i=a+1;i<b;i++) {
        if(i%5==3||i%5==2) printf("%d\n", i);
    }
    return 0;
}
