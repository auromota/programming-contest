/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int a, b, c;
    float p;
    while(1) {
        scanf("%d", &a);
        if(a==0) break;
        scanf("%d %d", &b, &c);
        p=(float)a*(float)b*(float)c;
        p/=((float)c-(float)a);
        int pag=p;
        if(pag==0||pag==1) printf("%d pagina\n", pag);
        else printf("%d paginas\n", pag);
    }
    return 0;
}
