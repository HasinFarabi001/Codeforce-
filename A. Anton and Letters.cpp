#include<iostream>
#include<cstring>
using namespace std;
int ch[30];
int main()
{
    char str[1001];
    scanf(" %[^\n]",str);
    int i,d = 0;
    for(i = 0;str[i] != '\0';i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            ch[str[i] - 'a']++;
        }
    }
    for(i = 'a';i <= 'z';i++)
    {
        if(ch[i - 'a'] > 0)
        {
            d++;
        }
    }

    cout << d << endl;
    return 0;
}
