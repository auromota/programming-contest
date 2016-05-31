/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {
    int tam[4], i, flag=0;
    for(i=0;i<4;i++) {
        scanf("%d", &tam[i]);
    }
    sort(tam,tam+4);
    if(tam[3]<tam[2]+tam[1]) flag=1;
    if(tam[2]<tam[1]+tam[0]) flag=1;
    printf("%c\n", flag==1?'S':'N');
    return 0;
}
