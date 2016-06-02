/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int a, b, cont=1;
    scanf("%d %d", &a, &b);
    int tempo_a = a, tempo_b = b;
    while((b-a) < tempo_b) {
        a+=tempo_a;
        b+=tempo_b;
        cont++;
    }
    printf("%d\n", cont);
    return 0;
}
