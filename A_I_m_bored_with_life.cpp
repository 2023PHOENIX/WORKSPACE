const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll f(ll n){
    if(n==0)
        return 1;
    return n*f(n-1);
}
ll gcd(ll k,ll p)
{
    ll gc{0};
   for(int i=1;i<=k and i<=p ; i++)
   {
       if(k%i==0 && p%i==0)
            gc = i;
   }
   return gc;
}

int main()
{
ios_base:: sync_with_stdio(false);
cin.tie(NULL);

    int n,m;cin>>n>>m;

    ll k = f(n);
    ll p = f(m);

    

    cout<<gcd(k,p);


}