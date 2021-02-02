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
        ll n;  cin>>n;

        ll *arr = new ll[n];

        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        ll even = 0;
        ll odd = 0;

        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==0)
                even++;
            else 
                odd++;
        }
        if(odd%2==1)cout<<"2";
        else 
            cout<<"1";
        cout<<endl;

        
    }
}