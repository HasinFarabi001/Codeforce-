#include<iostream>
using namespace std;
int main()
{
    int r,k;
    int i;
    cin >> k >> r;
    for(i = 1;;i++)
    {
        if((k*i)%10 == 0)
        {
            cout << i << endl;
            break;
        }else if(((k*i) - r)%10 == 0)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}

