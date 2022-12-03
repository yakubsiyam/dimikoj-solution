#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int a,b,cnt = 0;
        cin >> a >> b;
        for(int i = a; i <= b; i++)
        {
            for(int j = 1; j<= a; j++)
            {
                if((j%1 == 0) && (j%a == 0))
                {
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}

