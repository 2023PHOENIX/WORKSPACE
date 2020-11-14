const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base:: sync_with_stdio(false);  
    cin.tie(NULL);

    ll n,t;    cin>>n>>t;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    ll j{-1},ans{0},sum{0};

    for(int i=0;i<n;i++){
    
    if(sum+arr[i] <= t)
    {
        sum += arr[i];
    }
    else
    {
        sum+=arr[i];

        while(sum>t){
            j++;
            sum-=arr[j];
        }
    }
    ans = (ans,i-j);
    
    }
    cout<<ans<<endl;
}