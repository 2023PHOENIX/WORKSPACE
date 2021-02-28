const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll convert(ll n)
{
    int sum =0;

    while(n)
    {
        sum += n%10;
        n = n/10;
    }

    return sum;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin>>t;

    while(t--)
    {
        int n;  cin>>n;
        int chef = 0,morty = 0;


        while(n--)
        {
            ll a,b;    cin>>a>>b;
            a = convert(a);
            b = convert(b);
            if(a>b)
                chef++;
            if(a<b)
                morty++;
            if(a==b){
                morty++;
                chef++;
            }

        }

        if(chef==morty)
            cout<<2<<" "<<chef<<endl;
        if(chef>morty)
            cout<<0<<" "<<chef<<endl;
        if(chef<morty)
            cout<<1<<" "<<morty<<endl;  
    }
}