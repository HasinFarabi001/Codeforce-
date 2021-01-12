#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
int ch[30];
int main()
{
    char c = 'A';
    int i,n;
    cin >> n;
    char str[n];
    cin >> str;
    for(i = 0;i < n;i++)
    {
        str[i] = str[i]|32;
        ch[str[i] - 'a']++;
    }
    for(i = 'a';i <= 'z';i++)
    {
        if(ch[i - 'a'] == 0){
            cout << "NO" << endl;
            exit(0);
        }
    }
    cout << "YES" << endl;
    return 0;
}
