#include<iostream>
#include<cstring>
using namespace std;
char keyboard[] = "qwertyuiopasdfghjkl;zxcvbnm,./";
char s[110];
int f(char ch)
{
    int i,len = strlen(keyboard);
    for(i = 0;i < len;i++)
    {
        if(keyboard[i] == ch)
        {
            return i;
        }
    }
    return 0;
}

void L()
{
    int len = strlen(s);
    int i,n;
    for(i = 0;i < len;i++)
    {
        n  = f(s[i]);
        s[i] = keyboard[n+1];
    }

}
void R()
{
    int len = strlen(s);
    int i,n;
    for(i = 0;i < len;i++)
    {
        n  = f(s[i]);
        s[i] = keyboard[n-1];
    }

}

int main()
{
    char ch;
    cin >> ch >> s;
    if(ch == 'R')
    {
        R();
    }else{
        L();
    }
    cout << s << endl;
    return 0;
}
