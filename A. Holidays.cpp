#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,mih,mah,t1,t2,t3;
    cin >> n;
    if(n%7 == 0)
    {
        mih =(n/7) * 2;
        mah = mih;
    }else if(n%7 ==  1 || n%7 == 2)
    {
        mih = (n/7) * 2;
        mah = mih + n%7;
    }
    else if(n%7 == 6)
    {
        mih = (n/7) * 2 + 1;
        mah = (n/7) * 2 + 2;
    }
    else
    {
        mih = (n/7) * 2;
        mah = mih + 2;
    }
    cout << mih << " " << mah << endl;

    return 0;
}
