/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int a, neg=0, pos=0, eve=0, odd=0;
    for(int i=0;i<5;i++) {
        scanf("%d",&a);
        if(a>0) pos++;
        else if(a!=0) neg++;
        if(a%2==0) eve++;
        else odd++;
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", eve, odd, pos, neg);
    return 0;
}
