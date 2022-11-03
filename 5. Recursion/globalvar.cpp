#include <bits/stdc++.h>
using namespace std;

int x = 0;

int fun (int r) {
    if (r > 0) {
        x++;
        return fun(r-1)+x;
    }
    return 0;
}

int main()
{
    int n = fun(5);
    cout << n << endl;
    return 0;
}