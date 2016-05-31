/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n, k, vet[101], aux, cont;
    while(1) {
        cont=0;
        scanf("%d%d", &n, &k);
        memset(vet, 0, sizeof(vet));
        if(n==0&&k==0) break;
        while(n--) {
            scanf("%d", &aux);
            vet[aux]++;
        }
        int i;
        for(i=1;i<101;i++) {
            if(vet[i]>=k) cont++;
        }
        printf("%d\n", cont);
    }
    return 0;
}
