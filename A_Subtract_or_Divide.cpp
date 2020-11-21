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

        int s{0};

       if(n==1)
            cout<<0<<endl;
        else if(n==2)
            cout<<1<<endl;
        else if(n==3)
            cout<<2<<endl;
        else 
        {
            if(n%2==0)
                cout<<2<<endl;
            else 
                cout<<3<<endl;
        }

    }
}