#include<iostream>
using namespace std;
int main()
{
    int c = 0,n,i,j,temp;
    cin >> n;
    int arr[n];
    for(i = 0;i< n;i++)
    {
        cin >> arr[i];
    }
    int maxi = -1,maxind = 0;
    for(i = 0;i < n;i++)
    {
        if(arr[i] > maxi)
        {
            maxi = arr[i];
            maxind = i;
        }
    }

    for(i = maxind;i > 0;i--)
    {
        temp = arr[i];
        arr[i] = arr[i-1];
        arr[i - 1] = temp;
        c++;
    }

    int mini = 200,minind = 0;
    for(i = 0;i < n;i++)
    {
        if(arr[i] <= mini)
        {
            mini = arr[i];
            minind = i;
        }
    }
    for(i = minind;i < n-1;i++)
    {
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
        c++;
    }
    cout << c << endl;

    return 0;
}
