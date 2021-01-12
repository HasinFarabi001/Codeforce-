#include<iostream>
using namespace std;
int main()
{
    int n,i = 0,arr[101],sum = 0;
    arr[0] = 0;
    for(i = 1;i < 101;i++)
    {
        arr[i] = arr[i-1] + i;
    }
    cin >> n;
    for(i = 1;;i++)
    {
        sum+=arr[i];
        if(sum >= n)
        {
            if(sum == n)
            {
                cout << i << endl;
            }else
            {
                cout << i-1 << endl;
            }
            break;
        }
    }
    return 0;
}
