#include<iostream>
#include<algorithm>
using namespace std;

void take()
{
    int a[3],a2[3];cin >> a[0] >> a[1] >> a[2];
    if(a[0] == a[1] && a[2] == a[1])
    {
        cout << "YES\n" << a[0] << " " << a[1] << " " << a[2] << endl;
        return ;
    }
    sort(a,a+3);
    if(a[2] == a[1])
    {
        cout << "YES\n" << a[0] << " " << a[0] << " " << a[0] << endl;
    }else
    {
        cout << "NO" << endl;
    }
    return ;

}

int main()
{
    int t;cin >> t;
    while(t--)take();

    return 0;
}
