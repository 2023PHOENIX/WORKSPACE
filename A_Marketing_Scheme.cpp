#define ll long long 
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;  cin>>t;

    while(t--)
    {
        ll l,r;    cin>>l>>r;

        ll z = r+1;

       long double m = l%z;
       long double k = z/r;
        if(m>k)
            cout<<"YES\n";
        else
        {
            cout<<"NO\n";
        }
        
    }
        
        
}