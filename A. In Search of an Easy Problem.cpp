#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n,isit = 0;
    while(t--)
    {
        cin >> n;
        if(n == 1)
        {
            isit = 1;
        }
    }
    if(isit)
    {
        cout << "HARD" << endl;
    }else
    {
        cout << "EASY" << endl;
    }
    return 0;
}
