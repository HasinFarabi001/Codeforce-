#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int r1,r2,r3;cin >> r1 >> r2 >> r3;
    cout << min(min((r1+r2+r3),(r1*2 + r2*2)),min((r1*2 + r3*2),(r2*2 +r3*2))) << endl;
    return 0;
}
