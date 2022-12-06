#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt=0;
    for(int i=1000; i>=1; i--)
    {
        cnt++;
        printf("%d ", i);
        if(cnt%5==0)
            printf("\n");
    }
    return 0;
}
