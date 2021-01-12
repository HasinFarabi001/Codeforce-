#include<iostream>
#include<cstring>
using namespace std;

void take()
{
    int n,a,b,t1 = 0,t2 = 0,t3 = 0,i = 0,j;
    char ch = 'a';
    cin >> n >> a >> b;
    cout << "n = " << n << endl;
    char str[n+1];
    str[n] = '\0';
    cout << strlen(str) << "n = " << n <<  endl;
    while(t1 < n)
    {
        t2 = 0;
        ch = 'a';
        while(t1 < n && t2 < a)
        {

            str[t1] = ch;
            if(t2 < (b-1))
            {
                ch++;
            }else
            {
                ch = str[t1- b];
            }
            t2++;
            t1++;
        }
    }
    cout << str << strlen(str) << endl;

    return ;
}

int main()
{
    int t;cin >> t;
    while(t--)take();

    return 0;
}
