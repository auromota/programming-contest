/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {
    int c;
    scanf("%d", &c);
    while(c--) {
        int n, i;
        scanf("%d", &n);
        pair<int, int> vet[n+1];
        pair<float, int> vet2[n+1];
        for(i=0;i<=n;i++) {
            scanf("%d%d", &vet[i].first, &vet[i].second);
            vet2[i].first = sqrt(pow((vet[i].first-vet[0].first), 2)+pow((vet[i].second-vet[0].second), 2));
            vet2[i].second = i;
        }
        sort(vet2,vet2+n+1);
        printf("%d\n", vet2[1].second);
    }
    return 0;
}
