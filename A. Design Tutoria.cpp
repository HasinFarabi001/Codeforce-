#include<iostream>
#include<cmath>
using namespace std;

int l(int n)
{
    int r = sqrt(n) + 1;
    int i;
    for(i = 2;i <=r;i++)
    {
        if(n%i == 0)
        {
            return 1;
        }
    }
    return 0;
}
int h(int n)
{
    int r = sqrt(n) + 1;
    int i;
    for(i = 2;i <=r;i++)
    {
        if(n%i == 0)
        {
            return 1;
        }
    }
    return 0;
}

void even(int n)
{
    cout << n/2 << " " << n/2 << endl;
    return ;
}
void odd(int n)
{
    int low = n/2;
    int high = n/2 + 1;
    while(low)
    {
        if(l(low) && h(high))
        {
            cout << low << " " << high << endl;

            return ;
        }
        high++;
        low--;
    }
}
void odd2(int n)
{
    int low = n/2 - 1;
    int high = n/2 + 1;
    while(low)
    {
        if(l(low) && h(high))
        {
            cout << low << " " << high << endl;

            return ;
        }
        high++;
        low--;
    }
}

int main()
{
    int n;
    cin >> n;
    if(n&1)
    {
        odd(n);
    }else if(h(n/2) && l(n/2))
    {
        even(n);
    }else
    {
        odd2(n);
    }
    return 0;
}
