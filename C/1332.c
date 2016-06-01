/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>
#include <string.h>

int main() {
	int a, i, cont, cont2;
    scanf("%d", &a);
    for(i=0;i<a;i++) {
		char b[10];
        cont=0;
        cont2=0;
        scanf("%s", b);
        if(strlen(b)==5) {
            if(b[0]=='t') cont++;
            if(b[1]=='h') cont++;
            if(b[2]=='r') cont++;
            if(b[3]=='e') cont++;
            if(b[4]=='e') cont++;
            if(cont>3) printf("3\n");
        } else {
            if(b[0]=='o') cont++;
            if(b[0]=='t') cont2++;
            if(b[1]=='n') cont++;
            if(b[1]=='w') cont2++;
            if(b[2]=='e') cont++;
            if(b[2]=='o') cont2++;
            if(cont>1) printf("1\n");
            if(cont2>1) printf("2\n");
        }
    }
    return 0;
}
