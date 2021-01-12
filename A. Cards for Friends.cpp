#include<iostream>
#include<cmath>
using namespace std;
void take()
{
    int w,h,n,p = 1,i;
    cin >> w >> h >> n;
    if(n == 1){cout << "YES" << endl;return ;}
    i = 0;
    while(w%2 == 0)
    {
        w = w/2;
        p = p*2;
    }
    i = 0;
    while(h%2 == 0)
    {
        h = h/2;
        p = p*2;
    }
    if(p >= n)
    {
        cout << "YES" << endl;
    }else
    {
        cout << "NO" << endl;
    }
    return ;
}
int main()
{
    int t;cin >> t;
    while(t--)take();
    return 0;
}
