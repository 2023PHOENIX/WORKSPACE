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
while(n--)
{
    int a,b;    cin>>a>>b;

    if(a<=b)
        cout<<b-a<<endl;
    else
    {
        if(abs(a-b)%2==0)
            cout<<1<<endl;
        else
        {
           cout<<2<<endl;
        }
        
        
    }
}
    


}