const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    ll n;  cin>>n;

    while(n!=1)
    {
        cout<<n<<" ";

        if(n&1)
            n = n*3 + 1;
        else 
            n = n/2;
        
        

    }
    cout<<1<<" ";
}