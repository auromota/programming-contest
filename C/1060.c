/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    float a;
    int cont=0;
    for(int i=0;i<6;i++) {
        scanf("%f", &a);
        if(a>0) cont++;
    }
    printf("%d valores positivos\n", cont);
    return 0;
}
