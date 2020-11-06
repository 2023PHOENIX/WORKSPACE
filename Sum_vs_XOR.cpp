const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    ll c{0};
    for(int i=1;i<=n;i++)
    {
        ll k = n+i;
        ll kl = n^i;

        if(k==kl)
            c++;
    }
    cout<<c+1<<endl;
}