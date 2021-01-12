#include<iostream>
using namespace std;
int main()
{
    int pos = 0;
    char str[5];
    int n;
    cin >> n;
    for(;n;n--)
    {
        cin >> str;
        if(str[1] == '+')
        {
            pos++;
        }else if(str[1] == '-')
        {
            pos--;
        }
    }
    cout << pos << endl;
    return 0;
}
