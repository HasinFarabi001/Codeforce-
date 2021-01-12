#include<iostream>
#include<cmath>
using namespace std;

void take()
{
    int k,i;
    float n;
    cin >> n >> k;
    i = ceil(n/2);
    if(i >= k)
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
int t;
cin >> t;
while(t--)
{
    take();
}
return 0;
}
