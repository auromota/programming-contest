/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {
    int a, i;
    while(scanf("%d",&a)!=EOF) {
        pair<int, char> vetor[a];
        int par=0, aux;
        for(i=0;i<a;i++) {
            scanf("%d %c", &vetor[i].first, &vetor[i].second);
        }
        sort(vetor,vetor+a);
        aux=vetor[0].first;
        int d=0, e=0;
        if(vetor[0].second=='D') d++;
        else e++;
        for(i=1;i<a;i++) {
            if(vetor[i].first==aux) {
                if(vetor[i].second=='D') d++;
                else e++;
                if(d>0&&e>0) {
                    while(d>0&&e>0) {
                        par++;
                        e--;
                        d--;
                    }
                }
            } else {
                if(vetor[i].second=='D') {
                    d=1;
                    e=0;
                } else {
                    e=1;
                    d=0;
                }
            }
            aux=vetor[i].first;
        }
        printf("%d\n", par);
    }
    return 0;
}
