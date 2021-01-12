#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str1[101];
    char str2[101];
    cin >> str1 >> str2;
    int isit = 0;
    int len = strlen(str1);
    int i;
    for(i = 0;i < len;i++)
    {
        str1[i] = str1[i]&95;
        str2[i] = str2[i]&95;

        if(str1[i] > str2[i])
        {
            cout << "1" << endl;
            isit = 1;
            break;
        }else if(str1[i] < str2[i])
        {
            cout << "-1" << endl;
            isit = 1;
            break;
        }

    }
    if(isit == 0)
    {
        cout << "0" << endl;
    }
    return 0;
}
