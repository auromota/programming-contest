/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {
    int a[3], i, aa, b, c;
    for(i=0;i<3;i++) scanf("%d",&a[i]);
    aa=a[0];
    b=a[1];
    c=a[2];
    sort(a,a+3);
    for(i=0;i<3;i++) printf("%d\n",a[i]);
    printf("\n");
    printf("%d\n%d\n%d\n",aa,b,c);
    return 0;
}
