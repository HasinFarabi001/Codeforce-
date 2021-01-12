#include<iostream>
using namespace std;
int main()
{
    int n,i,j,cou = 0;cin >> n;
    j = n/2;
    for(i = 1;i <= j;i++)
    {
        if((n-i)%i == 0)
        {
            cou++;
        }
    }
    cout << cou << endl;
    return 0;
}
