#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        string str;
        cin >> str;
        string newStr = str;
        reverse(str.begin(), str.end());
        (str == newStr) ? cout << "Yes! It is palindrome!\n" : cout << "Sorry! It is not palindrome!\n";
    }
    return 0;
}
