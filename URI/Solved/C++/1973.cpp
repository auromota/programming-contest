/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int sum=0, pos=0;
    int i, n;
    scanf("%d", &n);
    long long int vet[n], total=0;
    int vis[n];
    memset(vis, 0, sizeof(vis));
    for(i=0;i<n;i++) {
        scanf("%lld",&vet[i]);
        total+=vet[i];
    }
    while(1) {
        vis[pos]=1;
        if(vet[pos]>0) {
            sum++;
            vet[pos]--;
            if((vet[pos]+1)%2==0) {
                pos--;
            } else {
                pos++;
            }
        } else {
            if(vet[pos]%2==0) {
                pos--;
            } else {
                pos++;
            }
        }
        if(pos>=n||pos<0) break;
    }
    long long int totalVis=0;
    for(i=0;i<n;i++) {
        totalVis+=vis[i];
    }
    printf("%lld %lld\n", totalVis, total-sum);
	return 0;
}
