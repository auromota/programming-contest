/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>
#include <math.h>

int main() {
    int t, a, i;
    scanf("%d", &t);
    while(t--) {
        int aux=0;
        scanf("%d", &a);
        if(a>2) {
            if(a%2!=0) {
                i=3;
                while(i<sqrt(a)) {
                    if (a%i==0) {
                        aux=1;
                        break;
                    }
                    i+=2;
                }
            } else aux=1;
        }
        if(aux==0) printf("Prime\n");
        else printf("Not Prime\n");
    }
    return 0;
}
