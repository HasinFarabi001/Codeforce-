#include<iostream>
using namespace std;
int main()
{
    int n,i,cou,high= 0,num,sum = 0;
    cin >> n;
    for(i = 0;i < n;i++)
    {
        cin>> num;
        if(num > high)
        {
            high = num;
        }
        sum+=num;
    }
    cout << (high * n) - sum << endl;
    return 0;
}
