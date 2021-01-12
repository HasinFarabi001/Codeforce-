#include<iostream>
using namespace std;

void take()
{
    int i,j,n,one = 0,two = 0,sum = 0;
    cin >> n;
    for(i = 0;i < n;i++)
    {
        cin >> j;
        sum+=j;
        if(j == 1){one++;}
        else if(j == 2){two++;}
    }
    if(sum%2 == 1)
        {
            cout << "NO" << endl;
            return ;
        }
    if(one > 0 && one%2 == 0)
    {
        cout << "YES" << endl;
    }else if(one == 0 && two%2 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return ;
}

int main()
{
    int t;cin >> t;
    while(t--)take();
    return 0;
}
