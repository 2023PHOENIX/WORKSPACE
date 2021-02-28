const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int solve(vector<ll> v,ll l)
{
    ll mindiff = INT_MAX;
    if(l==1)
        return 0;
    for(int i=0;i<v.size()-l-1;i++)
        mindiff = min(mindiff,v[i+l-1] - v[i]);

        return mindiff;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin>>t;

    while(t--)
    {
        ll n,l;    cin>>n>>l;

        vector<ll> v(n);

        for(auto &i : v)cin>>i;

        sort(v.begin(),v.end());


        cout<<solve(v,l)<<endl;
        
        
    }
}