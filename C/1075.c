/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    for(int i=2;i<=10000;i+=a) printf("%d\n",i);
    return 0;
}
