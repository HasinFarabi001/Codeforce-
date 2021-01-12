#include<iostream>
#include<cmath>
using namespace std;

void odd(long long int n,long long int k)
{
    long long int half = n/2 + 1;
    if(k <= half)
    {
        cout << (2*k) - 1 << endl;
        return ;
    }else
    {
        k = k -half;
        cout << 2*k << endl;
        return ;
    }
}
void even(long long int n,long long int k)
{
    long long int half = n/2;

    if(k <= half)
    {
        cout << (2*k) - 1 << endl;
        return ;
    }else
    {
        k = k -half;
        cout << 2*k << endl;
        return ;
    }
}
int main()
{
    long long int n,k;
    cin >> n >> k;
    if(n&1){odd(n,k);}
    else{even(n,k);}
    return 0;
}
