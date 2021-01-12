#include<iostream>
#include<algorithm>
using namespace std;
int gcd(int a,int b)
{
    if(b%a == 0)
    {
        return a;
    }
    b = b % a;
    return gcd(b,a);
}
int main()
{
    int a,b,c;
    cin >> a >> b;
    a = 6 - a + 1;
    b = 6 - b + 1;
    int maxi = min(a,b);
    c = gcd(maxi,6);
    cout << maxi/c << "/" << 6/c << endl;
    return 0;
}
