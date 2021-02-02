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
        ll n,k;  cin>>n>>k;

        ll *arr = new ll[n];

        for(int i=0;i<n;i++)cin>>arr[i];
    bool flag = true;
    // bool bigflag = false;
        for(ll i=0;i<n;i++)
        {
            flag=false;
            for(ll j=0;j<n;j++)
            {
                    if((arr[i]+arr[j])%k==0)
                     {  
                      flag = true;
                        break;
                     }
            
            }
            if(flag==false)
                break;

        }

        (flag==true)?cout<<"YES":cout<<"NO";
        cout<<endl;
    }
}