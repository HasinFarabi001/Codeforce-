#include<iostream>
#include<cmath>
using namespace std;
int c(int a,int b)
{
    if(a%b == 0)
    {
        return a/b;
    }else
    {
        return (a/b + 1);
    }
}

void take()
{
    int n,x,t1,t2,i = 0,smax = 0,smin = 0;
    long long int sum = 0;
    cin >> n >> x;
    for(i = 0;i < n;i++)
    {
        cin >> t1;
        smax+=c(t1,x);
        sum += t1;
    }
    smin+= c(sum,x);
    cout << smin << " " << smax << endl;
    return ;
 }

int main()
{
    int t;cin >> t;
    while(t--)take();
    return 0;
}
