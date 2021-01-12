#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    char str[110];
    cin >> str;
    int i;
    for(i = 0;str[i] != '\0';i++)
    {
        if(str[i] == 'H' || str[i] == 'Q' || str[i] == '9')
        {
            cout << "YES" << endl;
            exit(0);
        }
    }
    cout << "NO" << endl;
    return 0;
}
