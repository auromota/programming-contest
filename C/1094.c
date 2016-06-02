/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int a, total=0, c=0, r=0, s=0, aux;
    char b;
    scanf("%d",&a);
    for(int i=0;i<a;i++) {
        scanf("%d %c",&aux,&b);
        if(b=='C') c+=aux;
        else if(b=='R') r+=aux;
        else s+=aux;
        total+=aux;
    }
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",r);
    printf("Total de sapos: %d\n",s);
    printf("Percentual de coelhos: %.2f %%\n", (float)c*100/(float)total);
    printf("Percentual de ratos: %.2f %%\n", (float)r*100/(float)total);
    printf("Percentual de sapos: %.2f %%\n", (float)s*100/(float)total);
    return 0;
}
