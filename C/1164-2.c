/*
	Author: Auro Mota <auro@blueorc.com>
	This problem has a small set of answers, so I've done a hard-coded version to improve its execution time.
*/

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d",&a);
    for(int i=0;i<a;i++) {
        scanf("%d",&b);
        if(b==6) {
            printf("6 eh perfeito\n");
        } else {
            if (b==28) {
                printf("28 eh perfeito\n");
            } else {
                if (b==8128) {
                    printf("8128 eh perfeito\n");
                } else{
                    if(b==496) printf("496 eh perfeito\n");
                    else {
                        if (b==33550336) printf("33550336 eh perfeito\n");
                        else printf("%d nao eh perfeito\n",b);
                    }
                }
            }
        }
    }
    return 0;
}
