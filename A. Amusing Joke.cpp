#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
int main()
{
    int arr[30],arr2[30],i;
    for(i = 'A';i <= 'Z';i++)
    {
        arr[i - 65] = 0;
        arr2[i - 65] = 0;
    }
    char s1[101],s2[101],s3[101];
    cin >> s1;
    cin >> s2;
    cin >> s3;
    if(strlen(s3) != (strlen(s1) + strlen(s2)))
    {
        cout << "NO" << endl;
        exit(0);
    }
    for(i = 0;s1[i] != '\0';i++)
    {
        arr[s1[i] - 65]+=1;
    }
    for(i = 0;s2[i] != '\0';i++)
    {
        arr[s2[i] - 65]+=1;
    }

    for(i = 0;s3[i] != '\0';i++)
    {
        arr2[s3[i] - 65]+=1;
    }


    for(i = 'A';i <= 'Z';i++)
    {
        if(arr[i-65] != arr2[i-65])
        {
            cout << "NO" << endl;
            exit(0);
        }
    }
    cout << "YES" << endl;
    return 0;
}
