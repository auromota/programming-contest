/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int a,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++) {
        int j, k;
        scanf("%d",&j);
        int vetor[j];
        for(k=0;k<j;k++) scanf("%d",&vetor[k]);
        j/=2;
        printf("Case %d: %d\n",i,vetor[j]);
    }
    return 0;
}
