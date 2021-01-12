#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    int sum = 0;
    sum += a;
    while(a/b)
    {
        a = a/b;
        sum+=a;
    }
    cout << sum << endl;
    return 0;
}
