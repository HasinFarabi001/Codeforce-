#include<iostream>
using namespace std;
int a,b,sum,high;
void take()
{
    cin >> a;sum = sum - a;
    cin >> b;sum = sum + b;
    if(sum > high)high = sum;
    return ;
}

int main()
{
    int n;cin >> n;
    while(n--)take();

    cout << high << endl;
    return 0;
}
