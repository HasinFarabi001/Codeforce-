#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int sum = 0;

int check(int a,int b)
{
    if(a%b == 0)return a/b;
    else return a/b + 1;
}

int main()
{
    int n,t,sum = 0,one = 0,two = 0,three = 0,four = 0;cin >> n;
    while(n--)
    {
        cin >> t;
        if(t == 1)one++;
        else if(t == 2)two++;
        else if(t == 3)three++;
        else four++;
    }
    if(three >= one)
    {

        sum = four + three + check(two,2);
    }
    else
    {
        one = one - three;
        two = two*2 + one;
        sum = four + three + check(two,4);
    }
    cout << sum << endl;
    return 0;
}
