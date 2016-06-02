/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int i;
    float b[100];
    for(i=0;i<100;i++) {
        scanf("%f", &b[i]);
        if(b[i]<=10) {
            cout << "A[" << i << "] = " << b[i] << endl;
        }
    }
    return 0;
}
