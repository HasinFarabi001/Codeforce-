#include<iostream>
using namespace std;
int main()
{
    int arr[4];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
    int i,j,c = 0,m = -1;
    for(i = 0;i < 3;i++)
    {
        for(j = i+1;j < 4;j++)
        {
            if(arr[i] == arr[j])
            {
                c++;
                arr[j] = m;
                m--;
            }
        }
    }
    cout << c << endl;
    return 0;
}
