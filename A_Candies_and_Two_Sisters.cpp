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
        ll n;  cin>>n;


        if(n>2)
        {
            cout<<(n+1)/2 -1 <<endl;
        }
        else
        {
            cout<<0<<endl;
        }
        
    }
}
