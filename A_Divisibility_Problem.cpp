#define ll long long 
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;  cin>>n;

    while(n--)
    {
        ll x,y;    cin>>x>>y;

        ll z = x%y;

        if(z!=0)
        {
            z = y - z;
        }

        cout << z <<endl;
    }
}