/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int al=0, ga=0, di=0, a=0;
    printf("MUITO OBRIGADO\n");
    while(a!=4) {
        scanf("%d", &a);
        while(a<1||a>4) {
            scanf("%d", &a);
        }
        if(a==1) al++;
        if(a==2) ga++;
        if(a==3) di++;
    }
    printf("Alcool: %d\nGasolina: %d\nDiesel: %d\n", al, ga, di);
    return 0;
}
