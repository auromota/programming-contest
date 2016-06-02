/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>
#include <string.h>

int main() {
    char a[20];
    scanf("%s",a);
    if(a[0]=='v') {
        scanf("%s",a);
        if(a[0]=='a') {
            scanf("%s",a);
            if(a[0]=='c') printf("aguia\n");
            else printf("pomba\n");
        } else {
            scanf("%s",a);
            if(a[0]=='o') printf("homem\n");
            else printf("vaca\n");
        }
    } else {
        scanf("%s",a);
        if(a[0]=='i') {
            scanf("%s",a);
            if(a[2]=='m') printf("pulga\n");
            else printf("lagarta\n");
        } else {
            scanf("%s",a);
            if(a[0]=='h') printf("sanguessuga\n");
            else printf("minhoca\n");
        }
    }
    return 0;
}
