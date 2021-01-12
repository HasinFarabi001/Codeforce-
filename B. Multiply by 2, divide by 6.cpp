#include<iostream>
using namespace std;
void take()
{
    long long int n,k;
    cin >> n;
    k = n;
    int i,j,cou = 0,isit = 0;
    while(n < k*10000)
    {
        if(n == 1)
        {
            isit = 1;
            cout << cou << endl;
            return ;
        }
        if(n%6 == 0)
        {
            n = n/6;
            cou++;
        }else
        {
            n = n*2;
            cou++;
        }
    }
    if(isit == 0)
    {
        cout << "-1" << endl;
    }
    return ;
}

int main()
{
    int t;cin >> t;
    while(t--)take();
}
