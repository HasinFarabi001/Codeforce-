#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[101],s2[101];
    cin >> s1;
    cin >> s2;
    int len = strlen(s1);
    int k = len;
    int isit = 1,i;
    len--;
    for(i=0;i< k;i++,len--)
    {
        if(s1[i] != s2[len])
        {
            isit = 0;
            cout << "NO" <<endl;
            break;
        }
    }
    if(isit == 1)
    {
        cout << "YES" << endl;
    }
    return 0;
}
