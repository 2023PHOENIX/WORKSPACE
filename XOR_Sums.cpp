const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;  cin>>n;
    
    vector<int> v(n);
    vector<int> xr;
    xr.push_back(v[0]);
    for(auto &i : v)
        cin>>i;
    for(int i=1;i<n;i++)
        
    for(int i=1;i<n;i++)
        xr[i] = xr[i-1]^v[i];


    
    for(auto &i : xr)
        cout<<i<<" ";
        
}