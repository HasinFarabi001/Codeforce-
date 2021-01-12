#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,sum;
    cin >> n >> m;
    int mini = min(n,m);
    if(mini&1)
    {
        cout << "Akshat" << endl;
    }else
    {
        cout << "Malvika" << endl;
    }

    return 0;
}
