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

    while(t--){
        int n;  cin>>n;

        int *arr = new int[n];

        for(int i=0;i<n;i++)cin>>arr[i];
        int c = 0;
        for(int i=0;i<n;i++){
            if(arr[i]&1==1)
                c++;
        }
        cout<<min(c,n-c)<<endl;
    }
}