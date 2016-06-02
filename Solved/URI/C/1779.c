/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int t, x;
    scanf("%d", &t);
    for(x=1;x<=t;x++) {
        int a, i;
        scanf("%d", &a);
        int vet[a], pos=0, cont=1, contf=1, flag=0;
        for(i=0;i<a;i++) {
            scanf("%d", &vet[i]);
            if(vet[i]>vet[pos]) pos=i;
        }
        for(i=pos+1;i<a;i++) {
            if(vet[i]==vet[pos])
                cont++;
            else {
                if(cont>contf)
                    contf=cont;
                cont=1;
                flag=1;
                while(vet[i]!=vet[pos]) {
                    i++;
                    if(i==a) break;
                }
                pos=i;
            }
        }
        if(cont>contf) contf=cont;
        if(flag==0) contf=cont;
        if(a!=0) printf("Caso #%d: %d\n", x, contf);
        else printf("Caso #%d: 0\n", x);
    }
    return 0;
}
