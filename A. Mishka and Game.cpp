#include<iostream>
using namespace std;
int main()
{
    int n,m,c,mi = 0,ch = 0;cin >> n;
    while(n--)
    {
        cin >> m >> c;
        if(m > c){mi++;}
        if(m < c){ch++;}
    }
    if(mi > ch)
    {
        cout << "Mishka" << endl;
    }else if(ch > mi)
    {
        cout << "Chris" << endl;
    }else
    {
        cout << "Friendship is magic!^^" << endl;
    }
    return 0;
}
