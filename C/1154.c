/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int cont=0;
    float a, som=0;
    while(1) {
        scanf("%f", &a);
        if(a<0) break;
        som+=a;
        cont++;
    }
    som/=(float)cont;
    printf("%.2f\n", som);
    return 0;
}
