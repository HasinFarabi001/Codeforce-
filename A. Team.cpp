#include<iostream>
using namespace std;
int solve;
void take(){
    int a,b = 0;
    int i;
    for(i = 0;i < 3;i++)
    {
        cin >> a;
        b = b+a;
    }
    if(b >= 2)
    {
        solve++;
    }
    return;
}

int main()
{
    int n;
    cin >> n;
    for(;n;n--)
    {
        take();
    }
    cout << solve << endl;
    return 0;
}
