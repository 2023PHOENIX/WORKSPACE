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
        int n;  cin>>n;
        int sum{0};
        while(n--)
        {
            int d;  cin>>d;

            sum+=d;


        }
        (sum&1)?cout<<"YES\n":cout<<"NO\n";
    }
}