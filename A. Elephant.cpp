#include<iostream>
using namespace std;
int main()
{

    int n,m;
    cin >> n;
    m = n/5;
    n = n%5;
    m+=n/4;
    n = n%4;
    m+=n/3;
    n = n%3;
    m+=n/2;
    n = n%2;
    m+=n/1;
    cout << m << endl;
    return 0;
}
