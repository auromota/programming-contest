/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int n, m, i, j;
    while(1) {
        scanf("%d %d", &n, &m);
        if(n==0&&m==0) break;
        int mat[n][m];
        int aux=0, aux2=0, cont=1, cont1=1, cont2=1, cont3=1;
        for(i=0;i<n;i++) {
            for(j=0;j<m;j++) {
                scanf("%d", &mat[i][j]);
                if(mat[i][j]==1) aux++;
                aux2+=mat[i][j];
            }
            if(aux==m) cont=0;
            if(aux2==0) cont3=0;
            aux=0;
            aux2=0;
        }
        for(j=0;j<m;j++) {
            for(i=0;i<n;i++) {
                if(mat[i][j]==1) aux++;
                aux2+=mat[i][j];
            }
            if(aux==n) cont1=0;
            if(aux2==0) cont2=0;
            aux2=0;
            aux=0;
        }
        printf("%d\n", cont+cont1+cont2+cont3);
    }
    return 0;
}
