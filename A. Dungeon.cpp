#include<iostream>
#include<algorithm>
using namespace std;

void test()
{

    int a,b,c,sum,divide;
    cin >> a >> b >> c;
    divide = (a+b+c)/9;
    int mini = min(a,b);
    mini = min(mini,c);
    if(divide > mini)
    {
        cout << "NO" << endl;
        return ;
    }
    sum = a+b+c;
    divide = sum/9;
    if(divide == 0)
    {
        cout << "NO" << endl;
        return ;
    }
    for(;sum > 0;)
    {
        sum = sum - (divide*9);
        if(sum == 0)
        {
            cout << "YES" << endl;
            return ;
        }
    }
    cout << "NO" << endl;
}

int main()
{
   int t;
   cin >> t;
   for(;t;t--)
   {
       test();
   }
    return 0;
}
