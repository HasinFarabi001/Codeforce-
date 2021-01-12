#include<iostream>
#include<cstring>
using namespace std;

void take()
{
    int n,i,bad = 0;
    cin >> n;
    char s[101];
    cin >> s;
    int len = strlen(s);
    for(i = len-1;i > -1;i--)
    {
        if(s[i] == ')')
        {
            bad++;
        }else
        {
            break;
        }
    }
        if(bad == (len/2))
        {
            cout << "No" << endl;
            return ;
        }
        if(bad > (len/2))
        {
            cout << "Yes" << endl;
            return ;
        }
        if((len/2) > bad)
        {
            cout << "No" << endl;
            return ;
        }
        return ;
}

int main()
{
    int t;
    cin >> t;
    for(;t;)
    {
        take();
        t--;
    }
    return 0;
}
