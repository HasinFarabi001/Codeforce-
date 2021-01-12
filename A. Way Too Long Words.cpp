#include<iostream>
#include<cstring>
using namespace std;

void take()
{
    char str[102];
    cin >> str;

    int len = strlen(str);
    if(len <= 10)
    {
        cout << str << endl;
        return ;
    }else
    {
        cout << str[0] << len-2 << str[len-1] << endl;
        return ;
    }

}
int main()
{
   int t;
   cin >> t;
    for(;t;t--)
    {
        take();
    }
    return 0;
}
