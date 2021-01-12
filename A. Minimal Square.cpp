#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

void take()
{
    int a,b;
    cin >> a >> b;
    int maxi = max(a,b);
    int mini = min(a,b);
    if(maxi > 2*mini)
    {
        maxi = pow(maxi,2);
        cout << maxi << endl;
    }else
    {
        maxi = 2*mini;
        maxi = pow(maxi,2);
        cout << maxi << endl;

    }
    return ;
}

int main()
{
    int t;
    cin >> t;
    for(;t;t--)
    {
        take();
    }
    return 0;
}
