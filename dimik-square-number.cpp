#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int root,n;
        cin>>n;
        root = sqrt(n);
        if(root*root == n)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
