#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int n,k,i,j = 0;
    int num;
    cin >> n >> k;
    int arr[n+1];
    for(i = 0;i < k;i++)
    {
        cin >> num;
        arr[num] = 1;
    }
    if(k < n-1)
    {
        cout << "NO" <<endl;
        exit(0);
    }

    for(i = 1;i <= n;i++)
    {
        if(arr[i] != 1)
        {
            j++;
        }
    }
    if(j ==1){
    cout << "YES" << endl;
    }else
    {
        cout << "NO" << endl;
    }
    return 0;
}
