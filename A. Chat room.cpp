#include<iostream>
using namespace std;
int main()
{
    char str[110];
    cin >> str;
    char h[6] = "hello";
    int i,j = 0;
    for(i = 0;str[i] != '\0';i++)
    {
        if(str[i] == h[j])
        {
            j++;
            if(j == 5)
            {
                break;
            }
        }
    }
    if(j == 5)
    {
        cout << "YES" << endl;
    }else
    {
        cout << "NO" << endl;
    }


    return 0;
}

