#include<iostream>
#include<cstring>
using namespace std;
int red = 0;
void take()
{
    int n,i;
    cin >> n;
    char s1[n],s2[n];
    cin >> s1;
    cin >> s2;
    int l1 = strlen(s1);
    int l2 = strlen(s2);

    for(i = l1;i < n;i++)
    {
        s1[i] == '0';
    }
    for(i = l2;i < n;i++)
    {
        s2[i] == '0';
    }

    for(i = 0;i < n;i++)
    {
        if(s1[i] < s2[i])
        {
            red--;
        }else if(s1[i] > s2[i])
        {
            red++;
        }
    }
    if(red == 0)
    {
        cout << "EQUAL" << endl;
    }else if(red < 0)
    {
        cout << "BLUE" << endl;
    }else if(red > 0)
    {
        cout << "RED" << endl;
    }

    return ;
}

int main()
{
    int t;
    cin >> t;
    for(;t;t--)
    {
        red = 0;
        take();
    }
    return 0;
}
