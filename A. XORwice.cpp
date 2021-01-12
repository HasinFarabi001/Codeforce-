#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<cmath>
using namespace std;
void take()
{
    int a,b;
    cin >> a >> b;
    int maxi = max(a,b);
    int mini = min(a,b);
    int sum = maxi^mini;

    cout << sum << endl;
    return ;
}


int main()
 {
    int t;
    cin >> t;
    while(t--)
    {
        take();
    }
    return 0;
}
