#include<iostream>
#include<cstdlib>
using namespace std;

void take()
{
    int x1,x2,y1,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if(x1 == x2 && y1 == y2)
    {
        cout << "0" << endl;
    }else if(x1 != x2 && y1 != y2)
    {
        cout << abs(x2-x1)+abs(y2-y1)+2 << endl;
    }else
    {
        cout << abs(y2-y1)+abs(x2-x1) << endl;
    }
    return ;
}

int main(){
    int t;cin >> t;
    while(t--)take();
    return 0;
}
