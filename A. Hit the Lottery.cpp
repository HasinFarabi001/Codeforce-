#include<iostream>
using namespace std;
int main()
{
    int n,sum = 0;
    cin >> n;
    sum+=n/100;
    n = n%100;

    sum+=n/20;
    n = n%20;

    sum+=n/10;
    n = n%10;

    sum+=n/5;
    n = n%5;

    sum+=n/1;

    cout << sum << endl;

    return 0;
}
