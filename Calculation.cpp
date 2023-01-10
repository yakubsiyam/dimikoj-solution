#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int p,q,c,result, result1;
        cin>> p >> q >> c;
        result = pow(p,q);
        cout<< result % c;
    }
    return 0;
}





