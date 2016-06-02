/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int real, moeda;
    scanf("%d.%d",&real,&moeda);
    int notas100=0, notas50=0, notas20=0, notas10=0, notas5=0, notas2=0;
    int moedas100=0,moedas50=0,moedas25=0, moedas10=0, moedas5=0, moedas1=0;
    while(real>=100) {
        real-=100;
        notas100++;
    }
    while(real>=50) {
        real-=50;
        notas50++;
    }
    while(real>=20) {
        real-=20;
        notas20++;
    }
    while(real>=10) {
        real-=10;
        notas10++;
    }
    while(real>=5) {
        real-=5;
        notas5++;
    }
    while(real>=2) {
        real-=2;
        notas2++;
    }
    while(real>=1) {
        real-=1;
        moedas100++;
    }
    if(moeda!=0) {
        while(moeda>=50) {
            moeda-=50;
            moedas50++;
        }
        while(moeda>=25) {
            moeda-=25;
            moedas25++;
        }
        while(moeda>=10) {
            moeda-=10;
            moedas10++;
        }
        while(moeda>=5) {
            moeda-=5;
            moedas5++;
        }
        while(moeda>=1) {
            moeda-=1;
            moedas1++;
        }
    }
    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n", notas100, notas50, notas20, notas10, notas5, notas2);
    printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", moedas100, moedas50, moedas25, moedas10, moedas5, moedas1);
    return 0;
}
