/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int a, aux1=0, aux2=1;
    scanf("%d",&a);
    for(int i=0;i<a-1;i++) {
        if(i%2==0) {
            printf("%d ", aux1);
            aux1+=aux2;
        } else {
            printf("%d ", aux2);
            aux2+=aux1;
        }
    }
    if((a-1)%2==0) printf("%d\n", aux1);
    else printf("%d\n", aux2);
    return 0;
}
