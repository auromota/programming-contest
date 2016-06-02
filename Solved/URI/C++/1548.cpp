/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {
   int t;
   scanf("%d", &t);
   while(t--) {
       int a, i, cont=0;
       scanf("%d", &a);
       int vet[a], vet2[a];
       for(i=0;i<a;i++) {
           scanf("%d", &vet[i]);
           vet2[i]=vet[i];
       }
       sort(vet,vet+a);
       reverse(vet,vet+a);
       for(i=0;i<a;i++) {
           if(vet[i]==vet2[i]) cont++;
       }
       printf("%d\n", cont);
   }
   return 0;
}
