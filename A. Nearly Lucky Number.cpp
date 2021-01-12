#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char number[30];
    cin >> number;
    int len = strlen(number);
    int i,j = 0;
    for(i = 0;i < len;i++)
    {
        if(number[i] == '7' || number[i] == '4')
        {
            j++;
        }
    }
    if(j == 4 || j == 7)
    {
        cout << "YES" << endl;
    }else
    {
        cout << "NO" << endl;
    }

    return 0;
}
