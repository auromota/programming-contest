/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int a, n;
    scanf("%d",&a);
    for(int i=0;i<a;i++) {
        scanf("%d",&n);
        if(n==0) printf("NULL\n");
        else {
            if(n%2==0) {
                if(n>0) printf("EVEN POSITIVE\n");
                else printf("EVEN NEGATIVE\n");
            } else {
                if(n>0) printf("ODD POSITIVE\n");
                else printf("ODD NEGATIVE\n");
            }
        }
    }
    return 0;
}
