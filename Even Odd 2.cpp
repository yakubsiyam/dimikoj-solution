#include<bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;

    while(T--)
    {
        string s;
        cin >> s;

        (s[s.size() - 1] % 2 == 0) ? cout << "even\n" : cout << "odd\n";
    }

    return 0;
}
