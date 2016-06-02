/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>
#include <string.h>

int main() {
    int n, m, i, j, k, index;
    char a[12], aux;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
         scanf("%d", &m);
         int vet[m], pos=0;
         for(j=0;j<m;j++) {
             scanf("%c", &aux);
             scanf("%c", &aux);
             if(aux=='S') {
                 scanf("%s", a);
                 scanf("%s", a);
             }
             else scanf("%s", a);
             if(aux=='L') {
                pos--;
                vet[j]=-1;
             }
             if(aux=='R') {
                pos++;
                vet[j]=1;
             }
             if(aux=='S') {
                scanf("%d", &index);
                vet[j]=vet[index-1];
                pos+=vet[j];
             }
         }
         printf("%d\n", pos);
    }
    return 0;    
}
