#include<iostream>
using namespace std;
int main()
{
    char str[110];
    cin >> str;

    int isit = 1,i;
    if(str[0] >= 'a' && str[0] <= 'z')
    {
        for(i = 1;str[i] != '\0';i++)
        {
            if(str[i] >= 'a' && str[i] <= 'z')
            {
                isit = 0;
                break;
            }
        }
    }else
    {
    for(i = 1;str[i] != '\0';i++)
        {
            if(str[i] >= 'a' && str[i] <= 'z')
            {
                isit = 0;
                break;
            }
        }
    }

    if(isit)
    {
        for(i = 0;str[i] != '\0';i++)
        {
            if(str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = str[i]&95;
            }else
            {
                str[i] = str[i]|32;
            }
        }
        cout << str << endl;

    }else
    {
        cout << str << endl;
    }
    return 0;

}
