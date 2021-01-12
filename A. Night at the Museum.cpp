#include<iostream>
#include<cstring>
#include<cstdlib>
#include<algorithm>
using namespace std;
int main()
{
    char s[110];cin >> s;
    int i,len = strlen(s),arr[len+1],sum = 0,d1,d2;arr[0] = 1;
    for(i = 0;i < len;i++)arr[i+1] = s[i] - 96;

    for(i = 1;i <= len;i++)
        {
            d1  = abs(arr[i] - arr[i - 1]);
            d2 = (26 - arr[i-1]) + arr[i];
            cout << "\t\t" << d1 << "  " <<  d2 << "  " << min(d1,d2) << endl;
            sum += min(d1,d2);
        }
    cout << sum << endl;
    return 0;
}
