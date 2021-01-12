#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int n,i;
    cin >> n;
    int arr[12] = {4,7,47,74,444,447,477,474,777,747,774,744};
    for(i =0;i < 12;i++)
    {
        if(n%arr[i] == 0)
        {
            cout << "YES" << endl;
            exit(0);
        }
    }
    cout << "NO" << endl;
    return 0;
}
