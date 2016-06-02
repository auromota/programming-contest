/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {
    int q;
    scanf("%d", &q);
    pair<float, int> a[q];
    for(int i=0; i<q; i++) {
        scanf("%d %f", &a[i].second, &a[i].first);
    }
    sort(a, a+q);
    if(a[q-1].first >= 8.0) {
        printf("%d\n", a[q-1].second);
    } else {
        printf("Minimum note not reached\n");
    }
    return 0;
}
