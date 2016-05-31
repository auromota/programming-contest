/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {
    int a[3];
    scanf("%d%d%d", &a[0], &a[1], &a[2]);
    sort(a,a+3);
    printf("%d eh o maior\n",a[2]);
    return 0;
}
