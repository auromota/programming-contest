/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int valor;
    scanf("%d",&valor);
    int saida=valor;
    int notas100=0, notas50=0, notas20=0, notas10=0, notas5=0, notas2=0, notas1=0;
    while(valor>=100) {
        valor-=100;
        notas100++;
    }
    while(valor>=50) {
        valor-=50;
        notas50++;
    }
    while(valor>=20) {
        valor-=20;
        notas20++;
    }
    while(valor>=10) {
        valor-=10;
        notas10++;
    }
    while(valor>=5) {
        valor-=5;
        notas5++;
    }
    while(valor>=2) {
        valor-=2;
        notas2++;
    }
    while(valor>=1) {
        valor-=1;
        notas1++;
    }
    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", saida, notas100, notas50, notas20, notas10, notas5, notas2, notas1);
    return 0;
}
