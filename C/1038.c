/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int a;
    float b;
    scanf("%d%f",&a,&b);
    switch(a) {
        case 1 : b*=4;
        break;
        case 2 : b*=4.5;
        break;
        case 3 : b*=5;
        break;
        case 4 : b*=2;
        break;
        case 5 : b*=1.5;
        break;
    }
    printf("Total: R$ %.2f\n",b);
    return 0;
}
