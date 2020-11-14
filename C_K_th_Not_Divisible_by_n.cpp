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
        ll n,k; cin>>n>>k;

        ll s = (k/(n-1))*n; 
        ll of  = (k%(n-1))?k%(n-1):-1;      // both 3 and 4 multiple of 12
        
    
        s += of;
        cout<<s<<endl;
    }
}