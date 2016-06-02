/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int b, a;
    scanf("%d",&b);
    for(int i=0;i<b;i++) {
        scanf("%d",&a);
        if(a==1) printf("1 nao eh perfeito\n");
        else {
            int contador=0, vetor[a], j, som=1, aux=(a/2)+1;
            for(j=2;j<=aux;j++) if(a%j==0) som+=j;
            if(a==som) printf("%d eh perfeito\n",a);
            else printf("%d nao eh perfeito\n",a);
        }
    }
    return 0;
}
