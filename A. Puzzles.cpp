#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,j = 0;
    cin >> n >> m;
    int a[m];
    for(;j < m;j++)
    {
        cin >> a[j];
    }
    sort(a,a+m);
    int low = 0, high = n - 1;
    int mini = -1,sum  = 100000000,i,dif;
    for(;high < m;high++,low++)
    {
        dif = a[high] - a[low];
        if(sum > dif)
        {
            sum = dif;
        }
    }
    cout << sum << endl;
    return 0;
}
