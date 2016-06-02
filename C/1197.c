/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    float a, b;
    while(scanf("%f%f",&a,&b)!=EOF) {
        if(b==0) printf("0\n");
        else printf("%.0f\n",2*b*b*(a/b));
    }
}
