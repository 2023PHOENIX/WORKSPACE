const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll findMaxSum(ll *arr,int n)
{
    sort(arr,arr+n);

    ll result = abs(arr[n-1]-arr[n-2]) + abs(arr[n-1]-arr[0]) + abs(arr[n-2] - arr[0]);

    return result;
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin>>t;

    while(t--){
        int n;  cin>>n;

        ll *arr = new ll[n];
        for(int i=0;i<n;i++)cin>>arr[i];

        cout<<findMaxSum(arr,n)<<endl;
    }
}