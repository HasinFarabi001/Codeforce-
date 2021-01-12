#include<iostream>
using namespace std;

int main()
{
    int t;int h,m;
    cin >> t;
    while(t--)
    {
        cin >> h >> m;
        h = 24 - h;h = h * 60;
        cout << h - m << endl;
    }
    return 0;
}
