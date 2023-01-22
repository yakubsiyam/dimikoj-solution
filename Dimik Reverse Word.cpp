#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    string str;
    cin>>T;
    while(T--)
    {
        cin>>str;
        reverse(str.begin(), str.end());
        cout<<str<<endl;
    }
    return 0;
}
