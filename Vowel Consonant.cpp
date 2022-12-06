#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    cin.ignore();
    while(T--)
    {
        string s,letter;
        vector<string> vowelStr;
        vector<string> constStr;
        getline(cin,s);
        for(int i=0; i<s.size(); i++)
        {
            letter = s[i];
            if(s[i] == ' ')
            {
                continue;
            }
            else if((s[i] == 'a') || (s[i] == 'e') || (s[i] == 'i') || (s[i] == 'o') || (s[i] == 'u'))
            {
                vowelStr.push_back(letter);
            }
            else
            {
                constStr.push_back(letter);
            }
        }
        for(int i=0; i<vowelStr.size(); i++)
        {
            cout<<vowelStr[i];
        }
        cout<<endl;
        for(int i=0; i<constStr.size(); i++)
        {
            cout<<constStr[i];
        }
        cout<<endl;
    }
//    main();
    return 0;
}
