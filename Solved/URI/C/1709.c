#include <stdio.h>

int main() {
    int a, pos=1, cont=0;
    scanf("%d", &a);
    do {
        pos*=2;
        while(pos>a) pos-=a+1;
        cont++;
    } while(pos!=1);
    printf("%d\n", cont);
    return 0;
}
