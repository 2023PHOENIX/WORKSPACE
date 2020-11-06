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
        ll x,y,z;
        cin>>x>>y>>z;
    int c{0};
        ll k = max(x,max(y,z));
        ll q = min(x,min(y,z));

        if(x==k)
            c++;
        if(y==k)
            c++;
        if(z==k)
            c++;
        if(c >= 2)
        {
            cout<<"YES\n";
            cout<< k<<" "<<q<<" "<<q<<endl;
        }
        else 
            cout<<"NO\n";
    }
}