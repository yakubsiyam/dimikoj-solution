#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,rvse=0, rem;
        cin>>n;
        while(n!=0)
        {
            rem=n%10;
            rvse=rvse*10+rem;
            n/=10;
        }
        cout<<rvse<<endl;
    }
    return 0;
}


