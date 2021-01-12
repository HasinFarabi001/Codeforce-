#include<iostream>
#include<cmath>
using namespace std;

void take()
{
    int n,k,a,b = 0;
    cin >> n >> k;
    a = k;
    while(a >= n)
    {
        b+=a/n;
        a = a/n + a%n;

    }
    cout << b+k << endl;
}


int main()
{
    int t;cin >> t;
    while(t--)take();
    return 0;
}
