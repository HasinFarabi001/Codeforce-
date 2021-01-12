#include<iostream>
using namespace std;

void take()
{
    int n,i,j = 9;cin >> n;
    for(i = 0;i < n && i < 2;i++)
    {
        cout << j;
        j--;
    }
    j++;
    for(;i < n;i++)
    {
        j++;
        cout << j;
        if(j == 9)
        {
            j = -1;
        }
    }
    cout << endl;
    return ;
}
int main()
{
    int t;cin >> t;
    while(t--)take();

    return 0;
}
