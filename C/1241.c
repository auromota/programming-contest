/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>
#include <string.h>

int main() {
    int n, i, cont, dif;
    scanf("%d", &n);
    while(n--) {
       cont=0;
       char str1[1001], str2[1001];
       scanf(" %s", str1);
       scanf(" %s", str2);
       if(strlen(str1)>=strlen(str2)){
           i=strlen(str2);
           dif=strlen(str1)-strlen(str2);
           while(i--) {
               if(str2[i]==str1[i+dif]) cont++;
               else break;
           }
           if(cont==strlen(str2)) printf("encaixa\n");
           else printf("nao encaixa\n");
       } else printf("nao encaixa\n");
    }
}
