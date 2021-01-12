#include<iostream>
using namespace std;

int main()
{
    char s1[201];
    cin >> s1;

    int i = 0,j = 0,isit = 0;
    while(s1[i] != '\0')
    {
        if(s1[i] == 'W' && s1[i+1] == 'U' && s1[i+2] == 'B')
        {
            if(isit == 1)
            {
                cout << ' ';
            }
            i+=3;
        }else{
            isit = 1;
            cout << s1[i];
            i++;
        }

    }
    cout << endl;

    return 0;
}
