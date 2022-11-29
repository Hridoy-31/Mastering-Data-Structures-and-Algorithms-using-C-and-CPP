#include <bits/stdc++.h>
using namespace std;

double e (double x, double n) {
    static double s;
    if (n == 0) {
        return s;
    }
    s = 1+(x/n)*s;
    return e(x, n-1);
}

int main()
{
    cout << fixed << setprecision(5) << e(2,10) << endl;
    return 0;
}