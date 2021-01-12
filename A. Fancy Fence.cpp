#include<iostream>
using namespace std;
void take()
{
    int n;cin >> n;
    if(n < 60){cout << "NO" << endl;return ;}
    n = 180 - n;
    if(360%n == 0)
    {
        cout << "YES" <<endl;
    }else
    {
        cout << "NO" << endl;
    }
    return ;
}

int main()
{
    int t;cin >>t;
    while(t--)take();

    return 0;
}
