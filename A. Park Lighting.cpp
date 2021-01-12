#include<iostream>
#include<cmath>
using namespace std;
void take()
{
    int n,m;cin >> n >> m;m = n*m;
    m = ceil((double)m/2);
    cout << (int)m << endl;
    return ;
}

int main()
{
    int t;cin >> t;
    while(t--)take();
    return 0;
}
