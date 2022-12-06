#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,cnt=0;
    cin>>T;
    while(T--)
    {
        cnt++;
        int elem;
        vector<int> num;
        for(int i = 0; i<3; i++)
        {
            cin>>elem;
            num.push_back(elem);
        }

        sort(num.begin(), num.end());
        printf("Case %d: ",cnt);
        for(auto v : num)
        {
            cout<<v<<" ";
        }
        cout<<endl;
    }
    return 0;
}
