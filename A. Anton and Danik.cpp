#include<iostream>
#include<cstring>
using namespace std;
void check(int an,int dn)
{
        if(dn > an)
    {
        cout << "Danik" << endl;
    }else if(an > dn)
    {
        cout << "Anton" << endl;
    }else
    {
        cout << "Friendship" << endl;
    }
    return;
}
int main()
{
    int n;
    cin >> n;
    char str[n];
    cin >> str;
    int an = 0,dn = 0;
    int i;
    for(i = 0;i < n;i++)
    {
        if(str[i] == 'A')
        {
            an++;
        }else if(str[i] == 'D')
        {
            dn++;
        }

    }
    check(an,dn);

    return 0;
}
