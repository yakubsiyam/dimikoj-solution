#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        cin.ignore();
        string s,newS,reverseS;
        getline(cin,s);
        for(int i = 0; i<s.size(); i++)
        {
            newS.push_back(s[i]);
            if(s[i] == ' ')
            {
                for(int j=0; j<newS.size(); j++)
                {
                    if(s[j] == ' ')
                    {

                        break;
                    }
                }
                reverse(newS.begin(), newS.end());
                cout<<newS;
                newS = "";
            }
        }
        cout<<endl;
    }
    return 0;
}
