/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    float s=1;
    int a;
    for(a=2;a<101;a++) {
        s+=1/(float)a;
    }
    printf("%.2f\n", s);
    return 0;
}
