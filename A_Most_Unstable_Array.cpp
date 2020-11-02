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
        ll n,m;
        cin>>n>>m;

        if(n<=1)
            cout<<0<<endl;
        else if(n==2)
            cout<<m<<endl;
        else 
            cout<<m*2<<endl;
        
        


    }
}