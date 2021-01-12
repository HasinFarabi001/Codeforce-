#include<iostream>
using namespace std;
int main()
{
    char s1[2];
    char s2[20];
    cin >> s1;
    scanf(" %[^\n]",s2);
    int i,isit = 0;
    for(i = 0;s2[i] != '\0';i++)
    {
        if(s2[i] == s1[0] || s2[i] == s1[1]){isit++;}
    }
    if(isit > 0){cout << "YES" << endl;}
    else {cout << "NO" << endl; }
    return 0;
}
