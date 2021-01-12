#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

void take()
{
    int n,c0,total = 0,c1,h,l0 = 0,l1 = 0;cin >> n >> c0 >> c1 >> h;
    char s[n];cin >> s;
    int i;

    if(c0 == c1){cout << n*c0 << endl;return ;}
    else if(max(c0,c1) == min(c0,c1)+h){cout << max(c0,c1)*n << endl;return ;}
    else
    {
        for(i = 0;i < n;i++)
        {
            if(s[i] == '0'){l0++;}
            else {l1++;}
        }
        if(c0 > c1+h){total = n*c1 + l0*h;}
        else if(c1 > c0+h){total = n*c0 + l1*h;}
        else{total = c0*l0 + c1*l1;}
        cout << total << endl;
    }
}

int main()
{
    int tt;cin>>tt;
    while(tt--)take();
    return 0;
}
