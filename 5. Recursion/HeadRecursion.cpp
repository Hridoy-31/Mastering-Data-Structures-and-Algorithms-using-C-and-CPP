#include <bits/stdc++.h>
using namespace std;

void fun (int n) {
    if (n > 0) {
        fun(n-1); // recursion at the first in the recursive function.
        // After all the recursion calls are done, then the printing will start.
        cout << n << endl;
    }
}

int main()
{
    fun(20);
    return 0;
}
