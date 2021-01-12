#include<iostream>
using namespace std;
long long int a[30];
void arr()
{
    long long m = 2;
    int i;a[0] = 1;
    for(i = 1;i < 30;i++)a[i] = a[i-1] + m;m = m*2;
}
void take()
{
    int n,i;cin >> n;
    for(i = 1;i < 30;i++){if(n%a[i] == 0){cout << n/a[i] <<endl;return;}}
}
int main(){
    arr();
    int t;cin >> t;
    while(t--)take();
    return 0;
}
