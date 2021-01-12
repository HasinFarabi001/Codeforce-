#include<iostream>
using namespace std;
int main()
{
    int a[5];
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
    int i,j,sum = a[4],isit;
    for(i = 1;i <= a[4];i++)
    {
        isit = 1;
        for(j = 0;j < 4;j++)
        {
            if(i%a[j] == 0)
            {
                isit = 0;
            }
        }
        if(isit == 1)
        {
            sum--;
        }
    }
    cout << sum << endl;
    return 0;
}
