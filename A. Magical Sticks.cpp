#include<iostream>
using namespace std;
void take()
{
    int n;cin >> n;
    if(n&1)
    {
        cout << n/2+1 << endl;
    }else
    {
        cout << n/2 << endl;
    }
    return ;
}

int main()
{
    int t;cin >> t;
    while(t--)take();

    return 0;
}
