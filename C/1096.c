/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int i=1, j=7, cont=0;
    while(i<10) {
        printf("I=%d J=%d\n", i, j);
        cont++;
        if(cont==3) {
            cont=0;
            i+=2;
            j=8;
        }
        j--;
    }
    return 0;
}
