#include<iostream>
using namespace std;
int main()
{
    int n,k,w;
    cin >> n >> k >> w;
    int sum,i;
    i = n*w;
    sum = (w*(i+n))/2;
    if(sum <= k)
    {
        cout << "0" << endl;
    }else
    {
        cout << sum-k << endl;
    }

    return 0;
}
