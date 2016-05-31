/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>
#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    int n, k, flag;
    scanf("%d", &n);
    while(n--) {
        string a, b;
        flag=0;
        scanf("%d", &k);
        cin >> a;
        k--;
        while(k--) {
            cin >> b;
            if(a.compare(b)!=0) {
                flag=1;
            }
        }
        if(flag==1) printf("ingles\n");
        else cout << a << endl;
    }
    return 0;
}
