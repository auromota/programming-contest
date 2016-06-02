/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        long long int a, b, aux=10, flag=0;
        scanf("%lld%lld",&a,&b);
        if(a<b) printf("nao encaixa\n");
        else {
            while(b>=10) {
                if(b%aux==a%aux) {
                    b/=10;
                    a/=10;
                } else {
                    flag=1;
                    break;
                }
            }
            if(flag==0&&b==a%10) printf("encaixa\n");
            else printf("nao encaixa\n");
        }
    }
    return 0;
}
