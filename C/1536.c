/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
	int a, i;
	scanf("%d",&a);
    for(i=0;i<a;i++) {
        int ga, gb, gc, gd;
        scanf("%d x %d", &ga, &gb);
        scanf("%d x %d", &gc, &gd);
        if((ga+gd)>(gb+gc)) printf("Time 1\n");
        else {
            if((ga+gd)<(gb+gc)) printf("Time 2\n");
            else {
                if(gb>gd) printf("Time 2\n");
                else {
                    if(gb<gd) printf("Time 1\n");
                    else printf("Penaltis\n");
                }
            }
        }
    }
    return 0;
}
