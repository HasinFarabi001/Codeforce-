#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int i,j,n,m,a,b,odda = 0,oddb = 0,evena = 0,evenb = 0;
    cin >> n >> m;
    for(i = 0;i < n;i++)
    {
        cin >> a;
        if(a&1){
            odda++;
        }else{
            evena++;
        }
    }
    for(i = 0;i < m;i++)
    {
        cin >> b;
        if(b&1){
            oddb++;
        }else{
            evenb++;
        }
    }
    cout << min(evena,oddb)+min(evenb,odda) << endl;
    return 0;
}
