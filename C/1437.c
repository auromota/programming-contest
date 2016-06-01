/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int a, i, pos, aux;
    while(1) {
        scanf("%d",&a);
        pos=4;
        if(a==0) break;
        char vet[a];
        scanf(" %s",vet);
        for(i=0;i<a;i++) {
           if(vet[i]=='E') pos--;
           else pos++;
        }
        while(pos<0) pos+=4;
        aux=pos%4;
        if(aux==0) printf("N\n");
        else{
           if(aux==3) printf("O\n");
           else {
               if(aux==2) printf("S\n");
               else printf("L\n");
           }
        }
    }
    return 0;
}
