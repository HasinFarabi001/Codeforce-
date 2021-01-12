#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[110];
    int t;
    cin >>t;
   for(;t;t--){
    cin >> str;
    int len = strlen(str);
    cout << len << endl;
   }
    return 0;
}
