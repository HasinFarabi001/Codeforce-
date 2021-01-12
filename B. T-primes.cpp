#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;

int prime(int n)
{
    int i;
    int root = sqrt(n) + 1;
    for(i = 2;i < root;i++)
    {
        if(n%i == 0)
        {
            return 0;
        }
    }
    return 1;
}


void take()
{
    long long int x;
    cin >> x;
    if(x == 1 || x == 2 || x == 3)
    {
        cout << "NO" << endl;
        return ;
    }
    int higher = floor((double)sqrt(x));
    int lower = ceil((double)sqrt(x));
    if(higher != lower)
    {
        cout << "NO" << endl;
        return;
    }else
    {
        if(prime(lower))
        {
            cout << "YES" << endl;
            return ;
        }else
        {
            cout << "NO" << endl;
            return ;
        }
    }

}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        take();
    }
    return 0;
}
