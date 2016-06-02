/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>
#include <string.h>

int main() {
    int a;
    char str[50];
    scanf("%d",&a);
    switch(a) {
        case 61 : strcpy(str, "Brasilia");
        break;
        case 71 : strcpy(str, "Salvador");
        break;
        case 11 : strcpy(str, "Sao Paulo");
        break;
        case 21 : strcpy(str, "Rio de Janeiro");
        break;
        case 32 : strcpy(str, "Juiz de Fora");
        break;
        case 19 : strcpy(str, "Campinas");
        break;
        case 27 : strcpy(str, "Vitoria");
        break;
        case 31 : strcpy(str, "Belo Horizonte");
        break;
        default : printf("DDD nao cadastrado\n");
                  a=-1;
        break;
    }
    if(a!=-1) printf("%s\n",str);
    return 0;
}
