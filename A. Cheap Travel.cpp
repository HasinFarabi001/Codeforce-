#include<iostream>
using namespace std;
int n, m, a, b;
int cheap()
{
    if(b > m*a)return 0;
    else return 1;
}
int main()
{
    cin >> n >> m >> a >> b;
    if(cheap())
    {
        int total = (n/m)*b;
        if(b > (n%m)*a)total+= (n%m)*a;
        else total+=b;
        cout << total << endl;
        return 0;
    }else
    {
        cout << n*a << endl;
    }
    return 0;
}
