#define ll long long 
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ll n; cin>>n;
    
    ll i=4,sum{0};
    bool istrue{false};
    for(ll i=4;i<=n/2;i++)
    {
        for(ll j=2;j<=i/2;j++)
        {
            
            if(i%j==0)
            {
                istrue = true;
            }
            
            
             
        }
        for(ll j=2;j<=(n-i)/2;j++)
        {
            if((n-i)%j==0)
             {   istrue=true;sum=(n-i);break;}
            else 
                istrue= false;
            
        }
       
       
    }
    if(istrue==true)
    {
    cout<<sum<<" "<<n-sum<<endl;
    }
}
