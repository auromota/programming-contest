/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int i=3, j=2;
    float s=1;
    for(i=3;i<40;i+=2) {
        s+=((float)i/(float)j);
        j*=2;
    }
    printf("%.2f\n", s);
    return 0;
}
