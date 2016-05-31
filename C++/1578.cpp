/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>
#include <algorithm>
#include <stdlib.h>

using namespace std;

int numDigits(unsigned long long int x) {
    if(x>=100000000000000LL) {
        if(x>=1000000000000000LL) {
            if(x>=10000000000000000LL) {
                if(x>=100000000000000000LL) {
                    if(x>=1000000000000000000LL) {
                        if(x>=10000000000000000000LL) {
                           return 20;
                        }
                        return 19;
                    }
                    return 18;
                }
                return 17;
            }
            return 16;
        }
        return 15;
    }
    if(x>=10000000000LL) {
        if(x>=100000000000LL) {
            if(x>=1000000000000LL) {
                if(x>=10000000000000LL)
                    return 14;
                return 13;
            }
            return 12;
        }
        return 11;
    }
    if (x >= 10000) {
        if (x >= 10000000) {
            if (x >= 100000000) {
                if (x >= 1000000000)
                    return 10;
                return 9;
            }
            return 8;
        }
        if (x >= 100000) {
            if (x >= 1000000)
                return 7;
            return 6;
        }
        return 5;
    }
    if (x >= 100) {
        if (x >= 1000)
            return 4;
        return 3;
    }
    if (x >= 10)
        return 2;
    return 1;
}

int main(){
    int a, i, b, j, k, aux;
    scanf("%d", &a);
    for(i=0;i<a;i++) {
           scanf("%d",&b);
           unsigned long long int mat[b][b];
           for(k=0;k<b;k++) {
               for(j=0;j<b;j++) {
                  scanf("%llu",&mat[k][j]);
                  mat[k][j]*=mat[k][j];
               }
           }
           printf("Quadrado da matriz #%d:\n",i+4);
           aux=0;
           int vet[b], tam[b];
           while(aux<b) {
                for(k=0;k<b;k++)
                      vet[k]=numDigits(mat[k][aux]);
                sort(vet,vet+b);
                tam[aux]=vet[b-1];
                aux++;
           }
           int aux2;
           for(k=0;k<b;k++) {
               for(j=0;j<b;j++) {
                   aux2=numDigits(mat[k][j]);
                   while(aux2<tam[j]){
                       printf(" ");
                       aux2++;
                   }
                   if(j==b-1) printf("%llu", mat[k][j]);
                   else printf("%llu ", mat[k][j]);
               }
               printf("\n");
           }
           if(i!=a-1)printf("\n");
    }
    return 0;
}
