const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    ll n,c{0},sum{0};  cin>>n;
    
   while(n>1)
   {
       if(n&1)
        c++;
    n = n/2;
        
   }
    cout<<c<<endl;
}