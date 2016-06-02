/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>
#include <math.h>

int main() {
     int a, k, al, n, i, aux;
     scanf("%d", &a);
     for(k=0;k<a;k++) {
           aux=0;
           scanf("%d%d",&al,&n);
           int vet[al];
           for(i=0;i<al;i++) {
               scanf("%d",&vet[i]);
               if(fabs(n-vet[i])<fabs(n-vet[aux])) aux=i;
           }
           printf("%d\n", aux+1);
     }
}
