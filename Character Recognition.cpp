#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string s;
        cin>> s;
        int n = int(s[0]);
        if((n>=48) && (n<=57))
            cout<< "Numerical Digit\n";
        else if((n>=65) && (n<=90))
            cout<< "Uppercase Character\n";
        else if((n>=97) && (n<=122))
            cout<< "Lowercase Character\n";
        else
            cout<< "Special Characters\n";
    }
    return 0;
}


