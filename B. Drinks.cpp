#include<iostream>
using namespace std;
int main()
{
    float n,sum,i,num;
    cin >> n;
    i = n;
    for(;i;i--)
    {
        cin >> num;
        sum+= num;
    }
    i = (sum*1.00)/(n*1.00);
    cout << i << endl;
    return 0;
}
