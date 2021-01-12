#include<iostream>
using namespace std;

void take()
{
    int n1,i = 0,n2,arr[20],index = 1,cou = 0;
    cin >> n1;n2 = n1;
    while(n2)
    {
        if(n2%10 != 0)
        {
            arr[i] = (n2%10) * index;
            i++;
            cou++;
        }
        n2 = n2/10;
        index = index*10;
    }
    i--;

    cout << cou << endl;
    for(;i > -1;i--)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;
    return ;
}


int main()
{
    int t;cin >> t;
    while(t--)take();

    return 0;
}
