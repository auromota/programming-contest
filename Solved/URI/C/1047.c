/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a==c) {
    	if(b<d) printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n",d-b);
		else if(b==d) printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
		else printf("O JOGO DUROU 23 HORA(S) E %d MINUTO(S)\n",60-(b-d));
    } else {
        if(a<c) {
        	if(b>d) printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", c-a-1, 60-(b-d));
            else printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",c-a,d-b);
        } else {
        	if (b>d)printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", 23-a+c, 60-(b-d));
            else printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", 24-a+c, d-b);
        }
    }
    return 0;
}
