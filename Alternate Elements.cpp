#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,v;
        cin >> n;
        vector<int> elem;
        for(int i = 0; i < n; i++)
        {
            cin >> v;
            elem.push_back(v);
        }

        for(int i = 0; i < n; i+=2)
        {
            cout<<elem[i]<<" ";
        }
        cout<<endl;
    }
}


