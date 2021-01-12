#include<iostream>
#include<algorithm>
using namespace std;

void take()
{
    int n;cin >> n;
    int a[n],i,j = 1;
    for(i = 0;i < n;i++)cin >> a[i];

    sort(a,a+n);
    for(i = 0;i < n-1;i++)
    {
        if(a[i+1] - a[i] <= 1)
        {
            j++;
        }
    }
    if(j == n)cout << "YES" << endl;
    else cout << "NO" << endl;

    return ;
}

int main()
{
    int t;cin >> t;
    while(t--)take();
    return 0;
}
