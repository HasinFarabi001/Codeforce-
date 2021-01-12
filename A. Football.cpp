#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    char player[110];
    cin >> player;
    int i,isit = 1;
    for(i = 0;player[i] != '\0';i++)
    {
        if(player[i] == player[i-1])
        {
            isit++;
            if(isit == 7)
            {
                cout << "YES" << endl;
                exit(0);
            }
        }else
        {
            isit = 1;
        }
    }
    cout << "NO" << endl;
    return 0;
}
