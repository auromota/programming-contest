/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int casos, it1;
    scanf("%d", &casos);
    for(it1=0;it1<casos;it1++) {
        int a, i, cont=0;
        float md=0;
        scanf("%d", &a);
        int nota[a];
        for(i=0;i<a;i++) {
            scanf("%d", &nota[i]);
            md+=(float)nota[i];
        }
        md/=(float)a;
        for(i=0;i<a;i++) {
            if(nota[i]>md) cont++;
        }
        printf("%.3f\%%\n", (float)cont*100/(float)a);
    }
    return 0;
}
