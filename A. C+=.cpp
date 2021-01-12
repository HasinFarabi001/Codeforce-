#include<iostream>
#include<algorithm>
using namespace std;
int c;
void take()
{
    int a,b,n;
    cin >> a >> b >> n;
    int maxi = max(a,b);
    int mini = min(a,b);
    int sum;
    a = mini;
    b = maxi;
    while(1)
    {
        c++;
        a = a+b;
        if(a > n)
        {
            return ;
        }
        c++;
        b = a + b;
        if(b > n)
        {
            return ;
        }

    }

}


int main()
{
    int t;
    cin >> t;
    for(;t;t--)
    {
        c = 0;
        take();
        cout << c << endl;
    }
    return 0;
}
