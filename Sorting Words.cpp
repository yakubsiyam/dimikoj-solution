#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    long long n;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        vector<string> str;
        string s;
        for(int i=0; i<n; i++)
        {
            cin>>s;
            str.push_back(s);
        }
        sort(str.begin(), str.end());
        for(auto elem : str)
        {
            cout<<elem<<endl;
        }
    }
    return 0;
}


