/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int m, n, i, j;
    scanf("%d%d", &m, &n);
    int aux, contaux, cont=0;
    for(i=0;i<m;i++) {
        contaux=0;
        for(j=0;j<n;j++) {
            scanf("%d", &aux);
            if(aux>0) contaux++;
        }
        if(contaux==n) cont++;
    }
    printf("%d\n", cont);
    return 0;
}
