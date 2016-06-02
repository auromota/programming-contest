/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    int a, i;
    cin >> a;
    string b;
    for(i=0;i<a;i++) {
        int cont=0;
        cin >> b;
        int c=b.length();
        for(int j=0;j<c;j++) {
        	if(b[j]=='1') cont+=2;
        	else if(b[j]=='2'||b[j]=='3'||b[j]=='5') cont+=5;
			else if(b[j]=='4') cont+=4;
			else if(b[j]=='6'||b[j]=='9'||b[j]=='0') cont+=6;
			else if(b[j]=='7') cont+=3;
			else cont+=7;
        }
        cout << cont << " leds" << endl;
    }
    return 0;
}
