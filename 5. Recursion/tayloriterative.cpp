#include <bits/stdc++.h>
using namespace std;

double e (double x, double n) {
    double s = 1;
    double num = 1;
    double den = 1;
    for (int i=1; i<=n; i++) {
        num *= x;
        den *= i;
        s += num/den;
    }
    return s;
}

int main()
{
    cout << fixed << setprecision(5) << e(4,20) << endl;
    return 0;
}