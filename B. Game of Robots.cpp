#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,k,isit = 0,i,j,m = 0;
    cin >> n >> k;
    int arr[n];
    for(j = 0;j < n;j++)
    {
        cin >> arr[j];
        m+=(j+1);
        if(m >= k && isit == 0)
        {
            m = m - 1 - j;
            m = k - m - 1;
            i = m;
            isit = 1;
        }

    }
    cout << arr[i] << endl;

    return 0;
}
