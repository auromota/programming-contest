/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {
    int a, i;
    while(1) {
        scanf("%d", &a);
        if(a==0) break;
        pair<int, int> vet[a];
        for(i=0;i<a;i++) {
            scanf("%d", &vet[i].first);
            vet[i].second=(i+1);
        }
        sort(vet,vet+a);
        printf("%d\n",vet[a-2].second);
    }
    return 0;
}
