/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    float a, novo;
    int reajuste;
    scanf("%f",&a);
    if(a<=400) {
        novo=a*1.15;
        reajuste=15;
    } else {
        if(a<=800) {
            novo=a*1.12;
            reajuste=12;
        } else {
            if(a<=1200) {
                novo=a*1.10;
                reajuste=10;
            } else {
                if(a<=2000) {
                    novo=a*1.07;
                    reajuste=7;
                } else {
                    novo=a*1.04;
                    reajuste=4;
                }
            }
        }
    }
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", novo, novo-a, reajuste);
    return 0;
}
