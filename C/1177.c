/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
	int i, vet[1000], t, k=0;
	scanf("%d", &t);
	for(i=0;i<1000;i++) {
		if(k<t){
			printf("N[%d] = %d\n", i, k);
		} else {
			k=0;
			printf("N[%d] = %d\n", i, k);
		}
		k++;
	}
	return 0;
}
