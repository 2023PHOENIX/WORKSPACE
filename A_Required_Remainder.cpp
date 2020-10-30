#define ll long long 
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ll t;   cin>>t;

    while(t--)
    {
        ll x,y,n;

        cin>>x>>y>>n;

        if(n%x!=0)
        {
           n = n - n%x;
            n = n - abs(y-x);
            cout<<n<<endl;
        }
        else
        {
            cout<<n<<endl;
        }
        

        
        
    }
}