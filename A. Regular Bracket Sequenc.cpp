#include<iostream>
#include<cstring>
using namespace std;
char s[110];
int len,i;
void take()
{
    cin >> s;len = strlen(s);
    if(len%2 == 1)
    {
        cout << "NO" << endl;
        return;
    }
    for(i = 0;s[i] != '\0';i++)
    {
        if(s[i] == ')' || s[i] == '(')break;
    }
    if(s[i] == '(')
    {
        cout << "YES" << endl;
        return ;
    }else
    {
        if(s[0] == ')' || s[len - 1] == '(')
        {
            cout << "NO" << endl;
            return ;
        }else
        {
            cout << "YES" << endl;
            return ;
        }
    }

}

int main()
{
    int t;cin >> t;
    while(t--)take();
    return 0;
}

