#include<bits/stdc++.h>
using namespace std;

bool is_prime(int n)
{
    if(n < 2)
        return false;
    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while(T--)
    {
        int a, b, cnt = 0;
        cin >> a >> b;

        for(int i = a; i <= b; i++)
        {
            if(is_prime(i))
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
