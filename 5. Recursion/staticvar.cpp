#include <bits/stdc++.h>
using namespace std;

int fun(int n) {
    static int x = 0;
    if (n > 0) {
        x++;
        return fun(n-1) + x;
    }
    return 0;
}

int main()
{
    int x = fun(5);
    cout << x << endl;
    return 0;
}