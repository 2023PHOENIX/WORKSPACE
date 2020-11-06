const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;  cin>>n;

    while(n--)
    {
        ll x,y;    cin>>x>>y;

        ll a,b;    cin>>a>>b;

        if(x>y)
            swap(x,y);
        // x is always smaller

        ll ans1 = x*a+y*b;

        ll z = y - x;

        ll ans2 = z*a + x*b;

        cout<<min(ans1,ans2)<<endl;
    }
    
}