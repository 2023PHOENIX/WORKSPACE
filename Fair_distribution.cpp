const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin>>t;

    while(t--)
    {
        int n,k;    cin>>n>>k;

        vector<int> arr(n);

        for(auto &i : arr)
            cin>>i;


        sort(arr.begin(),arr.end());
        int ans = INT_MAX;

        for(int i=0;i+k-1<n;i++)
            ans = min(ans,arr[i+k-1]-arr[i]);
        

        cout<<ans<<endl;

    }
}