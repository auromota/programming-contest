/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
	int a;
	scanf("%d",&a);
	for(int i=0;i<a;i++) {
		float x, y, z;
		scanf("%f%f%f",&x,&y,&z);
		x*=2;
		y*=3;
		z*=5;
		x+=y+z;
		x/=10;
		printf("%.1f\n",x);
	}
	return 0;
}
