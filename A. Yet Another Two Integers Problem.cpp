#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

void take()
{
    int a,b;
    cin >> a >> b;
    a = abs(a-b);
    a = ceil((double)a/10);
    cout << a << endl;
    return;
}

int main()
{
    int t;
    cin >> t;
    while(t--)take();
    return 0;
}


/*
0
3
2
92
87654322
9150
*/
