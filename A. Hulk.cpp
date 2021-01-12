#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int n,i;
    cin >> n;
    char name[4][30] = {"I hate it ","I love it ","I hate that ","I love that "};
    for(i = 1;i <= n;i++)
    {
        if(i == n)
        {
            if(i&1)
            {
                cout << name[0];
            }else
            {
                cout << name[1];
            }
        }
        else if(i&1)
        {
            cout << name[2];
        }else
        {
            cout << name[3];
        }
    }
    cout << endl;
    return 0;

}
