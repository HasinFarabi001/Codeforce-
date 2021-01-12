#include<iostream>
using namespace std;
int main()
{
    int m = 0;
    int n;
    cin >> n;
    char str[n];
    cin >> str;
    int i;
    for(i = n-1;i;i--)
    {
        if(str[i] == str[i-1])
        {
            m++;
        }
    }
    cout << m << endl;
    return 0;
}
