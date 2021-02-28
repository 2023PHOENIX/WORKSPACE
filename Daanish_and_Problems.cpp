const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int solve(vector<ll> &arr,int k)
{
    for(int i=9;i>=0;i--)
    {
        if(k<arr[i] and arr[i]!=0)
            return i+1;
        if(k>=arr[i])
            k = k-arr[i];
    }

    return -1;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;  cin>>t;

    while(t--)
    {
        vector<ll> arr(10);

        for(auto &i : arr)
            cin>>i;

        int k;  cin>>k;
    
        cout<<solve(arr,k)<<endl;
      
    }
}