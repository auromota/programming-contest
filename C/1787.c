/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>
#include <stdlib.h>

int divisor(int n) {
    return (n&-n)==n;
}

int main() {
    int n, aux1, aux2, aux3, i, pu, pr, pi;
    while(1) {
        scanf("%d", &n);
        if(n==0) break;
        pu=0;
        pr=0;
        pi=0;
        for(i=0;i<n;i++) {
            scanf("%d%d%d", &aux1, &aux2, &aux3);
            if(divisor(aux1)==1) {
                pu++;
                if(aux1>aux2&&aux1>aux3) pu++;
            }
            if(divisor(aux2)==1) {
                pr++;
                if(aux2>aux3&&aux2>aux1) pr++;
            }
            if(divisor(aux3)==1) {
                pi++;
                if(aux3>aux1&&aux3>aux2) pi++;
            }
        }
        if(pu>pi&&pu>pr) {
            printf("Uilton\n");
        } else {
            if(pi>pu&&pi>pr) {
                printf("Ingred\n");
            } else {
                if(pr>pi&&pr>pu){
                    printf("Rita\n");
                } else {
                    printf("URI\n");
                }
            }
        }
    }
    return 0;
}
