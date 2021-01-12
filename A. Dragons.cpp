#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int n,i,j,s;
    cin >> s >> n;
    int arr[n][2];
    for(i = 0;i < n;i++)
    for(j = 0;j < 2;j++)
    cin >> arr[i][j];

    int temp1,temp2,index,mini;
    for(i = 0;i < n;i++)
    {
        mini = 1000000000;
        for(j = i;j < n;j++)
        {
            if(arr[j][0] < mini)
            {
                mini = arr[j][0];
                index = j;
            }
        }
        arr[index][0] = arr[i][0];
        arr[i][0] = mini;
        temp1 = arr[i][1];
        arr[i][1] = arr[index][1];
        arr[index][1] = temp1;
}

    for(i = 0;i < n;i++)
    {
        if(arr[i][0] >= s)
        {
            cout << "NO" << endl;
            exit(0);
        }
        s+=arr[i][1];
    }
    cout << "YES" << endl;

    return 0;
}
