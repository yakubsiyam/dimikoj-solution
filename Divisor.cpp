#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,cnt=0;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        cnt++;
        printf("Case %d: ",cnt);
        for(int i=1; i<=n; i++)
        {
            if(n%i == 0)
                printf("%d ", i);
        }
        cout<<endl;
    }
    return 0;
}


