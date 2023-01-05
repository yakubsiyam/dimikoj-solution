#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin>>T;
    while(T--)
    {
        double x;
        int cnt = 0;
        cin >>x;
        while(x >= 1)
        {
           x/=2;
           cnt++;
        }
        cout << cnt <<" days" << endl;
    }
    return 0;
}




