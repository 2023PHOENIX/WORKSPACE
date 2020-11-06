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


    ll z;  cin>>z;
    int c{0};
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            int k = i*j;
        
            if(k==z)
                c++;
        }
    }
    cout<<c<<endl;
}