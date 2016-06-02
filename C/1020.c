/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int ano=0,mes=0;
    while(a>=365) {
        a-=365;
        ano++;
    }
    while(a>=30) {
        a-=30;
        mes++;
    }
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, a);
    return 0;
}
