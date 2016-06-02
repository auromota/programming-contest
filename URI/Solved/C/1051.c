/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main(){
    float a;
    scanf("%f",&a);
    if(a<=2000) printf("Isento\n");
    else {
        a-=2000;
        float tax=0;
        if(a<=1000) tax+=a*0.08;
        else {
            tax+=80;
            float b=abs(a-1000);
            if(b<=1500) tax+=b*0.18;
            else {
                tax+=1500*0.18;
                float c=abs(b-1500);
                tax+=c*0.28;
            }
        }
        printf("R$ %.2f\n", tax);
    }
    return 0;
}
