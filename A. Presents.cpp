#include<iostream>
using namespace std;
int main()
{
int n,i,j;
cin >> n;
int arr[n];
int a2[n+1];
for(i = 0;i < n;i++)
{
    cin >> arr[i];
    a2[arr[i]] = i+1;
}
for(i = 1;i < n+1;i++)
{
    cout << a2[i] << " ";
}
cout << endl;

return 0;
}
