const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin>>t;

    while(t--)
    {
        int x,n,m;  cin>>x>>n>>m;
        bool defeat{false};
        
        while(n>0)
        {
            x = x/2 + 10;
            n--;
        }
        while(m>0)
        {
            x = x - 10;
            m--;
        }
        (x<=0)?cout<<"YES\n":cout<<"NO\n";
        
    }
}