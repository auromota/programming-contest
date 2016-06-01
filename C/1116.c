/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int i, a, m, n;
    scanf("%d", &a);
    for(i=0;i<a;i++) {
        scanf("%d%d", &m, &n);
        if(n==0) printf("divisao impossivel\n");
        else printf("%.1f\n", (float)m/(float)n);
    }
    return 0;
}
