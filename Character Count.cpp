#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string s, letter;
        cin>>s;
        for(int i=0; i<s.size(); i++)
        {
            int cnt = 0;
            letter = s[i];
            for(int j=0; j<s.size(); j++)
            {
                if(s[i] == s[j])
                {
                    cnt++;
                }
            }
            cout<<s[i]<<" = "<<cnt<<endl;
        }
    }
}

