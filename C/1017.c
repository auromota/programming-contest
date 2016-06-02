/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>
#include <math.h>

int main() {
    int time, velo;
    scanf("%d%d", &time, &velo);
    time*=velo;
    float media;
    media=(float)time/12;
    printf("%.3f\n", media);
    return 0;
}
