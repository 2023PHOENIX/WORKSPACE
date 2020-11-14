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
        bool flag{false};
        ll n,k; cin>>n>>k;
        if(k>n)
            flag = false;
        if(k==n)
            flag = true;
        else
        {
            
        
        if(n&1 && k&1)
        {
            flag = true;
        }
        else
        {
            if(!(n&1) and !(k&1))
                flag = true;
            else 
                flag = false;
        }
        
        }
        (flag)?cout<<"YES\n":cout<<"NO\n";
    }
}