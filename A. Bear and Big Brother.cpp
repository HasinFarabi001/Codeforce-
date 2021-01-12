#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b;
    for(c = 0;a <= b;c++)
    {
        a = a*3;
        b = b*2;
    }
    cout << c << endl;
    return 0;
}
