/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int cont=0;
    float a, media;
    for(int i=0;i<6;i++) {
        scanf("%f", &a);
        if(a>=0) {
            cont++;
            media+=a;
        }
    }
    media/=cont;
    printf("%d valores positivos\n%.1f\n", cont, media);
    return 0;
}
