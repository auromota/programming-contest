/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int a, z, i=1, j=1, k=1, auxj=2, auxk=1, auxk2=1;
    scanf("%d", &a);
    a*=2;
    for(z=0;z<a;z++) {
        printf("%d %d %d\n", i, j, k);
        if(z%2==0) {
            j++;
            k++;
        } else {
			i++;
            j+=auxj;
            auxj+=2;
            k+=6*auxk;
            auxk2++;
            auxk+=auxk2;
        }
    }
    return 0;
}
