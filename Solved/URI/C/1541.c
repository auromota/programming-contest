/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    while(1) {
    	scanf("%d", &a);
        if(a==0) break;
        scanf("%d %d", &b, &c);
        int area=a*b;
        area*=100;
        area/=c;
        float aux=sqrt(area);
        int aux2=aux;
        printf("%d\n", aux2);
    }
    return 0;
}
