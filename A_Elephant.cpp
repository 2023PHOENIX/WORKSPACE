#define ll long long 


const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ll n;   cin>>n;
    if(n>5)
    {
    if(n%5==0)
        cout << n/5 << endl;
    else
    {
        cout << n/5 +1 <<endl;
    }
    }
    else
    {
        cout << 1<<endl;
    }
    
    
    
}