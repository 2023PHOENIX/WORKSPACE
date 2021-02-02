const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void PointOfImpact(ll N,ll k,ll i,ll j)
{
    vector<pair<ll,ll>> a;
    if(i==j)
    {
        cout<<N<<" "<<N<<endl;
        return;
    }
    
    if(i>j){
        a.push_back(make_pair(i-j,0));
        a.push_back(make_pair(N,N-i+j));
        a.push_back(make_pair(N-i+j,N));
        a.push_back(make_pair(0,i-j));
       
    }

    if(j>i){
    a.push_back(make_pair(0,j-i));
    a.push_back(make_pair(N+i-j,N));
        a.push_back(make_pair(N,N+i-j));
        a.push_back(make_pair(j-i,0));
        
      
    }
    k = k%4;
    cout<<a[k].first<<" "<<a[k].second<<endl;

}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    int t;  cin>>t;
    while(t--)
    {
    ll n,k,i,j;    cin>>n>>k>>i>>j;

    PointOfImpact(n,k,i,j);
    }
    
}