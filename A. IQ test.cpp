#include<iostream>
using namespace std;;
int main()
{
    int t,i,n;
    int e = 0,o = 0;
    int en,on;
    cin >> t;
    for(i = 1;i <= t;i++)
    {
        cin >> n;
        if(n%2 != 0)
        {
            o++;
            on = i;
        }
        else
        {
            e++;
            en = i;
        }
    }

    if(o > e)
    {
        cout << en << endl;
    }else
    {
        cout << on << endl;
    }

    return 0;
}
