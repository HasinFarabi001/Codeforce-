#include<iostream>
using namespace std;

int main()
{
    int n,h,i;
    cin >> n >> h;
    int k = n;
    int arr[n];
    for(i = 0;i < k;i++)
    {
        cin >> arr[i];
        if(arr[i] > h)
        {
            n++;
        }
    }
    cout << n << endl;
    return 0;
}
