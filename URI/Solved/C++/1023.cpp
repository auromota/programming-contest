/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int a, cidade=1;
    while(1) {
        scanf("%d", &a);
        if(a==0) break;
        else {
            int i, aux;
            double consumo=0;
            int pessoas=0;
            pair<int, int> vetor[a];
            for(i=0;i<a;i++) {
                scanf("%d%d",&vetor[i].second,&aux);
                consumo+=aux;
                pessoas+=vetor[i].second;
                vetor[i].first=aux/vetor[i].second;
            }
            consumo/=(double)pessoas;
            consumo=floor(consumo*100)/100;
            sort(vetor,vetor+a);
            if (cidade>1) printf("\n");
            printf("Cidade# %d:\n", cidade);
            cidade++;
            int auxiliar=0;
            if(a==1) {
                printf("%d-%d", vetor[0].second, vetor[0].first);
            } else {
                for(i=1;i<a;i++) {
                    auxiliar=vetor[i-1].second;
                    if(vetor[i].first==vetor[i-1].first) vetor[i].second+=auxiliar;
                    else printf("%d-%d ", vetor[i-1].second, vetor[i-1].first);
                    if(i==a-1)
                        printf("%d-%d", vetor[i].second, vetor[i].first);
                }
            }
            printf("\n");
            printf("Consumo medio: %.2f m3.\n", consumo);
        }
    }
    return 0;
}
