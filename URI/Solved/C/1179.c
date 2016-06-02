/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
	int vet[15], i, j, par[5], impar[5], tpar=0, timpar=0;
	for(i=0;i<15;i++) {
		scanf("%d", &vet[i]);
    	if(vet[i]%2==0) {
			par[tpar]=vet[i];
			tpar++;
		} else {
			impar[timpar]=vet[i];
			timpar++;
    	}
        if(tpar>4) {
			for(j=0;j<tpar;j++) {
				printf("par[%d] = %d\n", j, par[j]);
			}
			tpar=0;
        }
        if(timpar>4) {
			for(j=0;j<timpar;j++) {
				printf("impar[%d] = %d\n", j, impar[j]);
			}
			timpar=0;
		}
    }
    for(j=0;j<timpar;j++) {
		printf("impar[%d] = %d\n", j, impar[j]);
    }
    for(j=0;j<tpar;j++) {
		printf("par[%d] = %d\n", j, par[j]);
    }
    return 0;
}
