#include<iostream>
using namespace std;
int main()
{
    char str[1001];
    cin >> str;
    str[0] = str[0]&95;
    cout << str << endl;
    return 0;
}
