#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[101];
    cin >> str;
    int len = strlen(str),i;
    for(i = 0;i < len;i++)
    {
        str[i] = str[i]|32;
        if(str[i] !=  'a' && str[i] != 'o' &&str[i] != 'y' &&str[i] != 'e' &&str[i] != 'u' && str[i] != 'i')
        {
            printf(".%c",str[i]);
        }
    }
    printf("\n");
    return 0;
}
