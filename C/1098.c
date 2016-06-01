/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    float i=0, j=1;
    int cont=0, aux=1, k=2, auxk=0;
    while(i<=2.1) {
        if(i-1==0||i-2==0||i>2||i<0.1) printf("I=%.0f J=%.0f\n", i, j);
        else printf("I=%.1f J=%.1f\n", i, j);
        cont++;
        j++;
        if(cont%3==0) {
            i+=0.2;
            j-=3;
            j+=0.2;
        }
    }
    return 0;
}
