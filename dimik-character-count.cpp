#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string s, res = "";
        cin >> s;
        for(int i=0; i < s.size(); i++)
        {
            int j;
            for(j=0; s.size(); j++)
            {
                if(s[i] == s[j])
                {
                    break;
                }
            }
            if(i == j)
            {
                res += s[i];
            }
        }

        for(int i = 0; i < res.size(); i++)
        {
            int cnt = 0;
            for(int j = 0; j < s.size(); j++)
            {
                if(res[i] == s[j])
                    cnt++;
            }
            cout << res[i] << " = " << cnt << "\n";
        }
        cout << "\n";
    }
//    main();
    return 0;
}




