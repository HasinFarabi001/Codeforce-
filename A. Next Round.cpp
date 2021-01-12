#include<iostream>
using namespace std;
int main()
{

    int n,k;
    cin >> n >> k;
    int arr[n];
    int i;
    for(i = 0;i < n;i++)
    {
        cin >> arr[i];
    }
    int r = arr[k-1];
    int pass = 0;
    for(i = 0;i < n;i++)
    {
        if(arr[i] >= r && arr[i] > 0)
        {
            pass++;
        }
    }
    cout << pass << endl;
    return 0;
}
