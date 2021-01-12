#include<iostream>
using namespace std;
long long int sum = 0;

int take2(int a,int b)
{
    int s= 0,c = a;
    while(a%b == 0)
    {
        s += c;
        a = a/b;
    }
    return s;
}

void take()
{
    int n,t1,x,i,j,isit = 1;
    cin >> n >> x;
    for(i = 0;i < n;i++)
    {
        cin >> t1;
        sum+=t1;
        if(isit == 1 && t1%x == 0)
        {
            sum+=take2(t1,x);
        }else
        {
            isit = 0;
        }
    }
    cout << sum << endl;
    return ;
}


int main()
{
    int t;cin >>t;
    while(t--){take();sum = 0;}
    return 0;
}
