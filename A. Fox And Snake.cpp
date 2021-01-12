#include<iostream>
using namespace std;

int main()
{
    int n,m,i,j;
    int right = 1;

    cin >> n >> m;
    for(i = 0;i < n;i++)
    {

        if(!(i&1))
        {
            for(j = 0;j < m;j++)
            {
                cout << "#";
            }
        }else if(right)
        {
            for(j = 0;j < m-1;j++)
            {
                cout << ".";
            }
            cout << "#";
            right = 0;
        }else
        {   right = 1;
            cout << "#";
            for(j = 0;j < m-1;j++)
            {
                cout << ".";
            }
        }
        cout << endl;
    }
    return 0;
}
