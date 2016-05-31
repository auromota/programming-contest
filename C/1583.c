/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>
#include <stdlib.h>

char mat[51][51];

struct ponto {
    int x, y;
};

void contaminar(int x, int y, int tamx, int tamy) {
    if(x<0||x>tamx||y<0||y>tamy)
        return;
    else {
        if(mat[x-1][y]=='A'){
            mat[x-1][y]='T';
            contaminar(x-1, y, tamx, tamy);
        }
        if(mat[x+1][y]=='A'){
            mat[x+1][y]='T';
            contaminar(x+1, y, tamx, tamy);
        }
        if(mat[x][y-1]=='A'){
            mat[x][y-1]='T';
            contaminar(x, y-1, tamx, tamy);
        }
        if(mat[x][y+1]=='A'){
            mat[x][y+1]='T';
            contaminar(x, y+1, tamx, tamy);
        }
    }
}

int main() {
    int x, y, i, j, k;
    while(1) {
        scanf("%d%d", &x, &y);
        if(x==0&&y==0) break;
        struct ponto p[x*y];
        k=0;
        for(i=0;i<x;i++) {
            for(j=0;j<y;j++) {
                scanf(" %c", &mat[i][j]);
                if(mat[i][j]=='T') {
                    p[k].x = i;
                    p[k].y = j;
                    k++;
                }
            }
        }
        for(i=0;i<k;i++ ){
            contaminar(p[i].x, p[i].y, x-1, y-1);
        }
        for(i=0;i<x;i++) {
            for(j=0;j<y;j++) {
                printf("%c", mat[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
