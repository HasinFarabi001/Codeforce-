#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long int n,m,a;
    cin >> n >> m >> a;
    n = ceil((double)n/a);
    m = ceil((double)m/a);
    n = n*m;
    cout << n << endl;

    return 0;
}

