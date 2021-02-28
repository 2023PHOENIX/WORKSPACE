const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int solve(int n,int k)
{
    if(n==0||k==0)
        return n;
    return n%k;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;

    while(t-- > 0)
    {
        int n,k;    cin>>n>>k;
        cout<<solve(n,k)<<endl;

        
    }
}