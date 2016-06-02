/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int gcd(int a, int b) {
	int q=0;
	int r=0;
	do {
		q=b/a;
		r=b%a;
		b=a;
		if(r)a=r;
	} while(r!=0);
	return a;
}

void soma(int a, int b, int c, int d) {
	int divisor=b*d;
    a*=d;
    c*=b;
    a+=c;
    printf("%d/%d = ", a, divisor);
    printf("%d/%d\n", a/(gcd(a,divisor)), divisor/(gcd(a,divisor)));
}

void subtracao(int a, int b, int c, int d) {
	int divisor=b*d;
    a*=d;
    c*=b;
    a-=c;
    printf("%d/%d = ", a, divisor);
    int x=a/(gcd(a,divisor)), y=divisor/(gcd(a,divisor));
    if(y<0) printf("%d/%d\n",-x,-y);
    else printf("%d/%d\n", x, y);
}

void divisao(int a, int b, int c, int d) {
    a*=d;
    b*=c;
    printf("%d/%d = ", a, b);
    printf("%d/%d\n", a/(gcd(a,b)), b/(gcd(a,b)));
}

void multiplicacao(int a, int b, int c, int d) {
    a*=c;
    b*=d;
    printf("%d/%d = ", a, b);
    printf("%d/%d\n", a/(gcd(a,b)), b/(gcd(a,b)));
}

int main() {
    int n, i;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        int a, b, c, d;
        char op, lixo;
        scanf("%d %c %d %c %d %c %d", &a, &op, &b, &op, &c, &lixo, &d);
        switch(op) {
            case '+' : soma(a,b,c,d);
            break;
            case '-' : subtracao(a,b,c,d);
            break;
            case '/' : divisao(a,b,c,d);
            break;
            case '*' : multiplicacao(a,b,c,d);
            break;
        }
    }
    return 0;
}
