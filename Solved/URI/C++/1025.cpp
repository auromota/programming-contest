/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {
    int n, q, i, j, k, aux, caso=1;
    while(1) {
        scanf("%d%d",&n,&q);
        if(n==0&&q==0) break;
        int vetor[n];
        for(i=0;i<n;i++) {
            scanf("%d", &vetor[i]);
        }
        printf("CASE# %d:\n", caso);
        caso++;
        sort(vetor,vetor+n);
        for(i=0;i<q;i++) {
            scanf("%d",&aux);
            j=0;
            k=0;
            while(j<n) {
                if(aux==vetor[j]) {
                    k=j+1;
                    break;
                }
                j++;
            }
            if(k==0) printf("%d not found\n",aux);
            else printf("%d found at %d\n",aux,k);
        }
    }
    return 0;
}
