/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if(a%2==0) a++;
    for(int i=0;i<12;i+=2) printf("%d\n",a+i);
    return 0;
}
