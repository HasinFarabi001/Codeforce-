#include<iostream>
#include<cstring>
using namespace std;
int arr[30];
int main()
{
    char str[101];
    cin >> str;
    int i,j = 0,len = strlen(str);
    for(i = 0;i < len;i++)
    {
        arr[str[i]-'a']++;
    }
    for(i = 'a';i <= 'z';i++)
    {
        if(arr[i - 'a'] > 0)
        {
            j++;
        }
    }
    if(j&1)
    {
        cout << "IGNORE HIM!" << endl;
    }else
    {
        cout << "CHAT WITH HER!" << endl;
    }
    return 0;

}
