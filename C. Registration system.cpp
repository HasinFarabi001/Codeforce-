#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string,int>reg;
    int i,t;cin >> t;
    string s;
    while(t--)
    {
        cin >> s;
        if(reg[s] == 0)
        {
            cout << "OK" << endl;
            reg[s]++;
        }else
        {
            cout << s << reg[s] << endl;
            reg[s]++;
        }
    }
    return 0;
}
