/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int x, som=0;
    if(a>b) {
        int aux;
        aux=a;
        a=b;
        b=aux;
    }
    for(x=a;x<=b;x++) if(x%13!=0) som+=x;
    cout << som << endl;
    return 0;
}
