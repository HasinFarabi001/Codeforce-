#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n,t;
    cin >> n >> t;
    char str[n];
    scanf("%s",str);
    int i,j;
    for(i = 0;i < t;i++)
    {
            for(j = n - 1;j > 0;j--)
            {
                if(str[j] == 'G' && str[j - 1] == 'B')
                {
                    str[j] = 'B';
                    str[j - 1] = 'G';
                    j--;
                }
            }
    }
    printf("%s\n",str);
    return 0;
}
