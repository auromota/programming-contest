/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int a, i, b, m, j;
    while(1) {
         scanf("%d", &a);
         if(a==0) break;
         m=0;
         j=0;
         for(i=0;i<a;i++) {
             scanf("%d", &b);
             if(b==0) m++;
             else j++;
         }
         printf("Mary won %d times and John won %d times\n", m, j);
    }
    return 0;
}
