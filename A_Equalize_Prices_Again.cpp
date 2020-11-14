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

       int n;   cin>>n;
        ll sum{0};

       for(int i=0;i<n;i++)
       {
           ll d;   cin>>d;

           sum+=d;
       }

       (sum%n==0)?cout<<sum/n<<endl:cout<<sum/n+1<<endl;
    }
}