/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    for(int i=2;i<=a;i+=2) printf("%d^2 = %d\n",i,i*i);
    return 0;
}
