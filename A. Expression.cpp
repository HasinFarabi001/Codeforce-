#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[10];
    cin >> a[0] >> a[1] >> a[2];
    a[3] = a[0]+a[1]+a[2];
    a[4] = a[0]*a[1]*a[2];
    a[5] = (a[0] + a[1])*a[2];
    a[6] = a[0]*(a[1] + a[2]);
    int maxi = 0,i;
    for(i = 3;i < 7;i++)
    {
        if(a[i] > maxi)
        {
            maxi = a[i];
        }
    }
    cout << maxi << endl;
    return 0;
}




