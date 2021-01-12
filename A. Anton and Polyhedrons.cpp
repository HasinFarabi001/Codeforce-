#include<iostream>
using namespace std;

int cal(char ch)
{
    if(ch == 'C')
    {
        return 6;
    }else if(ch == 'T')
    {
        return 4;
    }else if(ch == 'O')
    {
        return 8;
    }else if(ch == 'D')
    {
        return 12;
    }else
    {
        return 20;
    }
}

int main()
{
    int t,sum = 0;
    cin >> t;
    char s[20];
    while(t--)
    {
        cin >> s;
        sum+= cal(s[0]);
    }
    cout << sum << endl;
    return 0;
}



