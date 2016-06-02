/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int a, b, som=0;
    scanf("%d %d",&a,&b);
    if(a<b) {
        for(int i=a;i<=b;i++) if(i%13!=0) som+=i;
    } else {
        if(a>b) {
            for(int i=b;i<=a;i++) if(i%13!=0) som+=i;
        } else{
            if(a%13!=0) som+=a;
        }
    }
    printf("%d\n", som);
    return 0;
}
