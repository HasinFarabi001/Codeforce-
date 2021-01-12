#include<iostream>
using namespace std;
int main()
{
    unsigned char n1[110],n2[110],n3[110];
    cin >> n1 >> n2;
    int i = 0;
    for(i = 0;n1[i] != '\0';i++)
    {
        if(n1[i] == n2[i])
        {
            n3[i] = '0';
        }else if(n2[i] != n1[i])
        {
            n3[i] = '1';
        }
    }
    n3[i] = '\0';
    cout << n3 << endl;
    return 0;
}
