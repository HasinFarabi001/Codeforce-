#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[101];
    cin >> str;
    int len = strlen(str);
    int i,j,index;
    char mini = 0;
    for(i = 0;i < len;i+=2)
    {
        mini = 'a';
        for(j = i;j < len;j+=2)
        {
            if(str[j] < mini)
            {
                mini = str[j];
                index = j;
            }
        }
        str[index] = str[i];
        str[i] = mini;
    }
    cout << str << endl;

    return 0;
}
