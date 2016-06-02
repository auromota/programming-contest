/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    float a, b;
    int c;
    while(1) {
        c=0;
        scanf("%f %f", &a, &b);
        while(a<0||a>10) {
            printf("nota invalida\n");
            scanf("%f", &a);
        }
        while(b<0||b>10) {
            printf("nota invalida\n");
            scanf("%f", &b);
        }
        printf("media = %.2f\n", (a+b)/2);
        while(c<1||c>2) {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &c);
        }
        if(c==2) break;
    }
    return 0;
}
