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
    ll n;   cin>>n;
    ll sum{0};
    while(true)
    {
        int net = (n/10)*10;

        sum+=net;
        int left = n - net;

        n = n/10 + left;
        
        
        if(n<10)
            {
                sum+=n;
                break;
            }
        


    }
    cout<<sum<<endl;
}
}