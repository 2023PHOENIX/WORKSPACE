#define ll long long 


const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;


int main()
{
    ll c,am,ban;   cin>>c>>am>>ban;
    
    
    ll sum{0};
    for(int i=0;i<ban;i++)
    {   
        sum = sum + (i+1)*c;

    }
    
    (sum<= am)?cout<<0:cout<<sum-am;

}