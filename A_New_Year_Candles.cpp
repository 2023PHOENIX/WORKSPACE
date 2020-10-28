#define ll long long 
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    int c{n};

    while(n>=k)
    {
        c += (n/k);

        n = n/k;
    }
    cout<<c<<endl;
}