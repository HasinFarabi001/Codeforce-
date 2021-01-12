#include<iostream>
using namespace std;

void take()
{
    int n;cin >> n;
    int a[n],i,j =0 ,k = 0,l = 0,m = 0;
    for(i = 0;i < 2*n;i++)
    {
        m = 0;
        cin >> k;
        for(j = i-1;j < -1;j--)
        {
            if(k == a[j])m = 1;
        }
        if(m == 0)
        {
            a[l] = k;
            l++;
        }
    }
    for(i = 0;i < n;i++)cout << a[i] << " " << endl;
    return ;
}

int main()
{
    int t;cin >> t;
    while(t--)take();
    return 0;
}
