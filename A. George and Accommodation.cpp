#include<iostream>
using namespace std;
int m = 0;
void take()
{
    int a,b;
    cin >> a >> b;
    if((b-a) >= 2)
    {
        m++;
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
    cout << m << endl;
    return 0;
}

