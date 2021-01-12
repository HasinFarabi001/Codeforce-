#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n],i,j,sum = 0,sum2 = 0;
    for(i = 0;i < n;i++)
    {
        cin >> arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+n);
    sum = sum/2;
    for(j = 0,i = n-1;i > -1;i--)
    {
        sum2+=arr[i];
        j++;
        if(sum2 > sum)
        {
            break;
        }
    }
    cout << j << endl;
    return 0;
}
