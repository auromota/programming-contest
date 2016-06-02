/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    scanf("%f%f%f",&a,&b,&c);
    if(a==0) {
        printf("Impossivel calcular\n");
        return 0;
    }
    float delta=(b*b)-(4*a*c);
    if(delta<0) {
        printf("Impossivel calcular\n");
        return 0;
    }
    float r1=(-b+sqrt(delta))/(2*a), r2=(-b-sqrt(delta))/(2*a);
    printf("R1 = %.5f\nR2 = %.5f\n",r1,r2);
}
