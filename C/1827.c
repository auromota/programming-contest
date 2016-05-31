/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>
#include <string.h>

int main(){
    int n, i, j;
    while(scanf("%d", &n)!=EOF) {
        int mat[n][n];
        int k=n;
        while(k%3!=0) k--;
        memset(mat, 0, sizeof(mat));
        for(i=0;i<n;i++) {
            for(j=0;j<n;j++) {
                if(i==j) mat[i][j]=2;
                if(i+j==n-1) mat[i][j]=3;
                if(i>=k/3&&i<n-k/3&&j>=k/3&&j<n-k/3) mat[i][j]=1;
            }
        }
        mat[(i-1)/2][(j-1)/2]=4;
        for(i=0;i<n;i++) {
            for(j=0;j<n;j++){
                printf("%d", mat[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
