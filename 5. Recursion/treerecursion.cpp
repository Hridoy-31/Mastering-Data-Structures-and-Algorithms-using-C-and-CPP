#include <bits/stdc++.h>
using namespace std;

int fun (int n) {
    if (n>0) {
        cout << n << " ";
        fun(n-1);
        fun(n-1);
    }
    return 0;
}

int main()
{
    int r = 3;
    fun(r);
    return 0;
}