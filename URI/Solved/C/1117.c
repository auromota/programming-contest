/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    float flag=0, a, media=0;
    while(flag!=2) {
        scanf("%f",&a);
        if(a>=0&&a<=10) {
            media+=a;
            flag++;
        } else printf("nota invalida\n");
    }
    media/=2;
    printf("media = %.2f\n", media);
    return 0;
}
