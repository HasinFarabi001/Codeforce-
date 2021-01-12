#include<iostream>
using namespace std;
void take()
{
    int a,b;
    cin >> a >> b;
    if(a == b){
        cout << "0" <<endl;
    }else if(a < b){
        if((b-a)&1)
        {
            cout << "1" << endl;
        }else
        {
            cout << "2" << endl;
        }
    }else if(a > b)
    {
        if((a-b)&1)
        {
            cout << "2" << endl;
        }else
        {
            cout << "1" << endl;
        }
    }
    return ;
}

int main()
{
    int t;cin >> t;
    while(t--)take();

    return 0;
}
