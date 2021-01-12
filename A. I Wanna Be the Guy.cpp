#include<iostream>
#include<cstdlib>
using namespace std;
int arr[110];
int main()
{
    int n,p,q,m;
    cin >> n;
    cin >> p;
    while(p--)
    {
        cin >> m;
        arr[m] = 1;
    }
    cin >> q;
    while(q--)
    {
        cin >> m;
        arr[m] = 1;
    }

    for(p = 1;p <= n;p++)
    {
        if(arr[p] != 1)
        {
            cout << "Oh, my keyboard!\n";
            exit(0);
        }
    }
    cout << "I become the guy.\n";
    return 0;
}
