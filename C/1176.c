/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

long long int vetor[64];

void fib() {
    int i;
    vetor[0]=0;
    vetor[1]=1;
    vetor[2]=1;
    for(i=3;i<64;i++) {
        vetor[i]=vetor[i-1]+vetor[i-2];
    }
}

int main() {
    int a, i, x;
    scanf("%d", &a);
    fib();
    for(i=0;i<a;i++) {
        scanf("%d",&x);
        printf("Fib(%d) = %lld\n",x,vetor[x]);
    }
    return 0;
}
