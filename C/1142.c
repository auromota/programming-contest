/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int a,i,j=1;
    scanf("%d",&a);
    for(i=0;i<a;i++) {
        printf("%d %d %d PUM\n",j,j+1,j+2);
        j+=4;
    }
    return 0;
}
