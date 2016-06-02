/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <bits/stdc++.h>

using namespace std;

int fat(int n) {
    if(n==0||n==1) return 1;
    return n*fat(n-1);
}

int main() {
    int num, cont=0;
    scanf("%d", &num);
    vector<int> vet;
    int aux, i=0;
    while(aux<=num) {
        aux=fat(i);
        vet.push_back(aux);
        i++;
    }
    i-=2;
    while(num>0) {
        if(num>=vet.at(i)) {
            num-=vet.at(i);
            cont++;
        } else i--;
    }
    printf("%d\n", cont);
    return 0;
}
