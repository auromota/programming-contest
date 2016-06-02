/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, i, j, aux;
    scanf("%d%d", &a, &b);
    pair<int, int> jog[a];
    for(i=0;i<a;i++) {
        jog[i].first=0;
        jog[i].second=i+1;
    }
    for(j=0;j<b;j++) {
        for(i=0;i<a;i++){
            scanf("%d",&aux);
            jog[i].first+=aux;
        }
    }
    sort(jog,jog+a);
    printf("%d\n", jog[a-1].second);
    return 0;
}
