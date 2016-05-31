/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int q,i;
    scanf("%d",&q);
    while(q--) {
        scanf("%d",&i);
        printf("%d\n", i%2==0?0:1);
    }
    return 0;
}
