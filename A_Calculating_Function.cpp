#define ll long long 
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ll n;   cin>>n;
    ll sum{0};
    if(n%2==0)
        sum = n/2;
    else
    {
        sum = (n/2+1)*(-1);
    }
    
    cout << sum << endl;
}