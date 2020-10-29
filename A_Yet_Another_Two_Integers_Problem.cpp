#define ll long long 
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;


int main() {

    int t;  cin>>t;
    while(t--)
    {

    
    ll a,b;    cin>>a>>b;
    ll z = abs(a-b)/10;

    if(abs(a-b)%10==0)
        {
            cout<<z<<endl;
        }
    else
    {
        cout<<z+1<<endl;
    }
    }



}
