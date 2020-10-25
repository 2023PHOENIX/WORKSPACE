#define ll long long 


const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ll n;   cin>>n;
    int flag{1};
    while(n)
    {
        int rem = n%10;
        if(rem!=7||rem!=4||rem!=0)
            flag = 0; break;
    
        n = n/10;
    }

    (flag==1)?cout<<"YES\n":cout<<"NO\n";
        
}