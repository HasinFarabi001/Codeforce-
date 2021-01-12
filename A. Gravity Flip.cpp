#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n],t;
    for(t = 0;t < n;t++)
    {
        cin >> arr[t] ;
    }
    sort(arr,arr+n);
    for(t = 0;t < n;t++)
    {
        cout << arr[t] << " ";
    }
    cout << endl;
    return 0;
}
