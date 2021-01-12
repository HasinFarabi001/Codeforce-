#include<iostream>
using namespace std;
int main()
{
    int n,num,i = 1,worst,best,amazing = 0;
    cin >> n >> num;
    best = num;worst = num;
    for(;i < n;i++)
    {
        cin >> num;
        if(num > best)
        {
            best = num;
            amazing++;
        }else if(num < worst)
        {
            worst = num;
            amazing++;
        }
    }
    cout << amazing << endl;
    return 0;
}
