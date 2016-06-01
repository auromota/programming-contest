/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>

int main() {
    int a, inter=0, gremio=0, emp=0, total=1, g1, g2;
    scanf("%d%d", &g1, &g2);
    if(g1>g2) inter++;
    else {
        if(g1<g2) gremio++;
        else emp++;
    }
    while(1) {
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &a);
        if(a==2) break;
        scanf("%d%d", &g1, &g2);
        if(g1>g2) inter++;
        else {
            if(g1<g2) gremio++;
            else emp++;
        }
        total++;
    }
    printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n", total, inter, gremio, emp);
    if(inter>gremio) printf("Inter venceu mais\n");
    else {
        if(gremio>inter) printf("Gremio venceu mais\n");
        else ("Nao houve vencedor\n");
    }
    return 0;
}
