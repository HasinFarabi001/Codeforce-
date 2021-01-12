#include<iostream>
#include<algorithm>
using namespace std;
int main()

    int a,b;
    cin >> a >> b;
    int maxi = max(a,b);
    int mini = min(a,b);
    int d1 = mini;
    int d2 = (maxi-mini)/2;
    cout << d1 << " " << d2 << endl    ;
    return 0;
}
