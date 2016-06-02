/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>
#include <string.h>

int main() {
    int a, i, j, cont;
    char b[150];
    scanf("%d", &a);
    for(i=0;i<a;i++) {
        cont=0;
        scanf("%s", b);
        for(int j=0;j<strlen(b);j++) {
            if(b[j]=='1') cont+=2;
        	else if(b[j]=='2'||b[j]=='3'||b[j]=='5') cont+=5;
			else if(b[j]=='4') cont+=4;
			else if(b[j]=='6'||b[j]=='9'||b[j]=='0') cont+=6;
			else if(b[j]=='7') cont+=3;
			else cont+=7;
        }
        printf("%d leds\n", cont);
    }
    return 0;
}
