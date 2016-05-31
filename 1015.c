/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>
#include <math.h>

int main(){
    int x1, y1, x2, y2;
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    x1-=x2;
    x1*=x1;
    y1-=y2;
    y1*=y1;
    x1+=y1;
    printf("%.4f\n", sqrt(x1));
    return 0;
}
