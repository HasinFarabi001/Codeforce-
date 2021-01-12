#include<iostream>
using namespace std;

void take()
{
    int x,y,n,t1,t2;
    cin >> x >> y >> n;
    if(n%x == y){cout << n << endl;return ;}
    if(y == 0){cout << "0" << endl;return ; }
    t1 = n/x;
    t2 = t1*x + y;
    if
    cout << t2 << endl;
    return ;
}

int main()
{
    int t;cin >> t;
    while(t--)take();

    return 0;
}
