/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {
    pair<int, int> vetor[101];
    for(int i=1;i<101;i++) {
        scanf("%d",&vetor[i].first);
        vetor[i].second=i;
    }
    sort(vetor,vetor+101);
    printf("%d\n%d\n",vetor[100].first,vetor[100].second);
}
