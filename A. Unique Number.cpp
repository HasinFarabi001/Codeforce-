#include<iostream>
using namespace std;
int main()
{
    int i,j = 9,k = 2,m = 10;
    int arr[46];
    arr[0] = 0;
    arr[1] = 1;

    for(i = 2;i < 46;i++)
    {
        arr[i] = arr[i-1] + (m/10);
        if(k == j)
        {
            j--;
            k = 0;
            m = m*10;
        }
        k++;
    }

    int t;
    cin >>t;
    for(;t;t--)
    {
        cin >> i;
        if(i > 45)
        {
            cout << "-1" << endl;
        }else
        {
            cout << arr[i] << endl;
        }
    }

    return 0;
}
