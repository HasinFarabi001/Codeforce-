#include<iostream>
using namespace std;
int main()
{
    long long int n,i;
    cin >> n;
    if(n&1)
    {
        i = -1 * ((n/2)+1);
        cout << i << endl;
    }else
    {
        i = n/2;
        cout << i << endl;
    }
    return 0;
}
