#include<iostream>
using namespace std;

int check(int i)
{
    int digit[5];
    int k = i,n = 0,j;
    for(;i;i = i/10,n++)
    {
        digit[n] = i%10;
    }
    for(i = 0;i < 3;i++)
    {
        for(j = i+1;j < 4;j++)
        {
            if(digit[i] == digit[j])
            {
                return 0;
            }
        }
    }
    return 1;
}


int main()
{
    int y;
    cin >> y;
    y++;
    for(;;y++)
    {
        if(check(y))
        {
            cout << y << endl;
            break;
        }
    }

    return 0;
}
