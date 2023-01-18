#include<bits/stdc++.h>
using namespace std;

bool is_prime(long long n)
{
    if(n < 2)
        return false;
    for(long long i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int T;
    cin >> T;

    while(T--)
    {
        long long n;
        cin >> n;
        (is_prime(n)) ? cout << n << " is a prime\n" : cout << n << " is not a prime\n";
    }
    return 0;
}
