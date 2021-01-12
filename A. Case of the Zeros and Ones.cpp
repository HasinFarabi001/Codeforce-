#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int one = 0,i,zero = 0,n;cin >> n;
    char str[n];cin >> str;
    for(i = 0; i< n;i++)
    {
        if(str[i] == '0'){zero++;}
        else {one++;}
    }
    int mini = min(zero,one);
    cout << n-(mini*2) << endl;
    return 0;
}
