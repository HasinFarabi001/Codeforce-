#include<iostream>
#include<cstring>
using namespace std;
void up(char s[],int len)
{
    int i;
    for(i = 0;i < len;i++)
    {
        s[i] = s[i]&95;
    }
    return ;
}
void low(char s[],int len)
{
    int i;
    for(i = 0;i < len;i++)
    {
        s[i] = s[i]|32;
    }
    return;
}


int main()
{
    char str[101];
    cin >> str;
    int len = strlen(str);
    int upper = 0,lower = 0,i;
    for(i = 0;i < len;i++)
    {
        if(str[i] >= 'a' && str[i] <='z')
        {
            lower++;
        }
    }
    upper = len - lower;
    if(upper > lower)
    {
        up(str,len);
        cout << str << endl;
    }else
    {
        low(str,len);
        cout << str << endl;
    }

    return 0;
}
