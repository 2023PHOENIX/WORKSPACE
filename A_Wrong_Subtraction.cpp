#define ll long long 


const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ll n;   cin>>n;

    int k;  cin>>k;

    while(k--)
    {
        if(n%10!=0)
        {
             n = n - 1;
        }
        else
        {
            n = n/10;
        }
        
    }
    cout << n << endl;
    
}