/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int a, in=0, out=0, n;
    scanf("%d",&a);
    for(int i=0;i<a;i++) {
        scanf("%d",&n);
        if(n>=10&&n<=20) in++;
        else out++;
    }
    printf("%d in\n%d out\n", in, out);
    return 0;
}
