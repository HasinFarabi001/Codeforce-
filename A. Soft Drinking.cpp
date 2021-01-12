#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int tdrink = k*l;
    int tt1 = tdrink / nl;
    int tt2 = p/np;
    tt1 = min(tt1,tt2);
    c = c*d;
    tt1 = min(c,tt1);
    tt1 = tt1/n;
    cout << tt1 << endl;

    return 0;
}

