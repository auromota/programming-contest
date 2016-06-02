/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int cont=-1;

int fibonacci(int a) {
    cont++;
    if(a==1) return 1;
    else if(a==0) return 0;
	else return fibonacci(a-1)+fibonacci(a-2);
}

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        int fib;
        cont=-1;
        scanf("%d",&fib);
        printf("fib(%d) = %d calls = %d\n",fib, cont, fibonacci(fib));
    }
    return 0;
}
