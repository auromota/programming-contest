/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int aux, i, vet[20], j=19;
    for(i=0;i<20;i++) {
        scanf("%d", &vet[i]);
    }
    for(i=0;i<10;i++) {
        aux=vet[j];
        vet[j]=vet[i];
        vet[i]=aux;
        j--;
    }
    for(i=0;i<20;i++) {
        printf("N[%d] = %d\n", i, vet[i]);
    }
    return 0;
}
