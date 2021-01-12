#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
int main()
{
    int a,b,i = 1,n,j = 1,group = 1;
    cin >> n;
    cin >> a;
    b = a;
    for(;i < n;i++)
    {

        cin >> a;
        if(a != b)
        {
         group++;
        }
        b = a;
    }
    cout << group << endl;

    return 0;
}
