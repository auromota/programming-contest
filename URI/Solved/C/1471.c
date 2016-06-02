/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n, v, i, flag, aux;
    while(scanf("%d%d",&n,&v)!=EOF) {
        flag=0;
        int vet[n];
        memset(vet, 0, sizeof(vet));
        for(i=0;i<v;i++) {
            scanf("%d", &aux);
            vet[aux-1]=1;
        }
        for(i=0;i<n;i++) {
            if(vet[i]==0) {
                printf("%d ", i+1);
                flag=1;
            }
        }
        if(flag==0) printf("*\n");
        else printf("\n");
    }
    return 0;
}
