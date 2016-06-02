/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>
#include <string.h>

int main() {
    int a, i, j;
    scanf("%d",&a);
    for(i=0;i<a;i++) {
        char var[100000], var2[100000];
        scanf(" %[^\n]",var);
        int k=strlen(var), metade=k/2, tam=k-1;
        for(j=0;j<k;j++) {
        	if(var[j]>64&&var[j]<123) var[j]+=3;
		}
		for(j=0;j<k;j++) {
            var2[tam]=var[j];
            tam--;
        }
        for(j=metade;j<k;j++) var2[j]--;
        for(j=0;j<k;j++) printf("%c", var2[j]);
        printf("\n");
    }
}
