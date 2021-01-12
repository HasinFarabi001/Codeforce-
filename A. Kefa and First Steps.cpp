#include<iostream>
using namespace std;
int main()
{
    int maxi = 1,a,b,j = 1,t;
    cin >> t;
    cin >> a;
    b = a;
    t--;
    while(t--)
    {
        cin >> a;
        if(a >= b)
        {
            j++;
            if(j > maxi)
            {
                maxi = j;
            }

        }
        else
            {
                j = 1;
            }
        b = a;
    }
    cout << maxi << endl;
    return 0;

}
