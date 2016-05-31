/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>
#include <math.h>

int rafael(int x, int y){
    return pow((3*x),2)+pow(y,2);
}

int beto(int x, int y){
    return 2*pow(x,2)+pow((5*y),2);
}

int carlos(int x, int y){
    return -100*x+pow(y,3);
}

int main() {
    int n, x, y, r, b, c;
    scanf("%d", &n);
    while(n--) {
        scanf("%d %d", &x, &y);
        r = rafael(x,y);
        b = beto(x,y);
        c = carlos(x,y);
        printf("%s ganhou\n", r>b?r>c?"Rafael":"Carlos":b>c?"Beto":"Carlos");
    }
    return 0;
}
