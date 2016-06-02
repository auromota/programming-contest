/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    int forca, i;
    for(i=0;i<t;i++) {
        char nome[100];
        scanf(" %s", nome);
        scanf("%d", &forca);
        if(strcmp(nome, "Thor")==0) {
            printf("Y\n");
        } else {
            printf("N\n");
        }
    }
    return 0;
}
