/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int a, b, i, sum=0;
    scanf("%d %d",&a,&b);
    if(a>b) {
        int aux=a;
        a=b;
        b=aux;
    }
    if(a%2!=0) a++;
    for(i=a+1;i<b;i+=2) sum+=i;
    printf("%d\n", sum);
    return 0;
}
