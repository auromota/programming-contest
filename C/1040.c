/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    float a, b, c, d;
    scanf("%f%f%f%f",&a,&b,&c,&d);
    float media=a*2+b*3+c*4+d;
    media/=10;
    printf("Media: %.1f\n", media);
    if(media>=7) printf("Aluno aprovado.\n");
    else {
        if(media>=5) {
            printf("Aluno em exame.\n");
            float e;
            scanf("%f",&e);
            printf("Nota do exame: %.1f\n", e);
            if((media+e)/2>=5) printf("Aluno aprovado.\n");
            else printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n", (media+e)/2);
        } else printf("Aluno reprovado.\n");
    }
    return 0;
}
