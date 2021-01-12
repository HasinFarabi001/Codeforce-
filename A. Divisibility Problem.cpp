#include<iostream>
#include<cmath>
using namespace std;
//       a%b == 0;    a > b
void take()
{
    int a,b;
    cin >> a >> b;
    if(a%b == 0)
    {
        cout << "0\n";
        return;
    }
    int near = a/b + 1;
    int sum = (near*b) - a;
    cout << sum << endl;

    return ;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        take();
    }
    return 0;
}
