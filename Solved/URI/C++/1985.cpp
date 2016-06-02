/*
	Author: Auro Mota <auro@blueorc.com>
*/

#include <stdio.h>
#include <map>

using namespace std;

int main() {
    map<int, float> p = {
        {1001, 1.50},
        {1002, 2.50},
        {1003, 3.50},
        {1004, 4.50},
        {1005, 5.50}
    };
    int a, c, q;
    float s=0;
    scanf("%d", &a);
    while(a--) {
        scanf("%d %d", &c, &q);
        s+=q*p.at(c);
    }
    printf("%.2f\n", s);
    return 0;
}
