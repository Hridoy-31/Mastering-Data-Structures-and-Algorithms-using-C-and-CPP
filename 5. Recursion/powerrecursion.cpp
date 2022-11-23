#include <bits/stdc++.h>
using namespace std;

int power(int a,int b) {
    if (b == 0) {
        return 1;
    }
    return power(a,(b-1))*a;
}

int powerimproved(int a, int b) {
    if (b == 0) {
        return 1;
    }
    if (b%2 == 0) {
        return power(a*a, b/2);
    }
    return a*power(a*a, (b-1)/2);
}

int main()
{
    int x = powerimproved(2,9);
    cout << x << endl;
    return 0;
}