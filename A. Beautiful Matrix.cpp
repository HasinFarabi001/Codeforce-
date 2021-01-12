#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int i = 3,j = 3;
    int i2,j2;
    int m,n;
    int arr[5][5];
    for(m = 0;m < 5;m++)
    {
        for(n = 0;n < 5;n++)
        {
            cin >> arr[m][n];
            if(arr[m][n] == 1)
            {
                i2 = m+1;
                j2 = n+1;
            }
        }
    }
    int mo = abs(i-i2) + abs(j-j2);
    cout << mo << endl;
    return 0;
}
