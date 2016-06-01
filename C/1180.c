/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int a, i;
    scanf("%d",&a);
    int vet[a], aux, j=0;
    scanf("%d", &vet[0]);
    aux=vet[0];
    for(i=1;i<a;i++) {
        scanf("%d", &vet[i]);
        if(vet[i]<aux) {
            aux=vet[i];
            j=i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n", aux, j);
    return 0;
}
