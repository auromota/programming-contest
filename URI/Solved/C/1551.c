/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int n, i;
    scanf("%d", &n);
    while(n--) {
        char a[1001];
        int vet[26];
        for(i=0;i<26;i++) vet[i]=0;
        scanf(" %[^\n]", a);
        for(i=0;i<strlen(a);i++) {
            if(a[i]>=97&&a[i]<=122) {
                vet[a[i]-97]++;
            }
        }
        int cont=0;
        for(i=0;i<26;i++) {
            if(vet[i]>0) cont++;
        }
        if(cont<13) printf("frase mal elaborada\n");
        else {
            if(cont<26) printf("frase quase completa\n");
            else printf("frase completa\n");
        }
    }
    return 0;
}
