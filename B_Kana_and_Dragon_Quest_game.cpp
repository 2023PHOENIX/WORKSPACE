const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int t;
        cin>>t;

        while(t--)
        {
            int Q,n,m;

            cin>>Q>>n>>m;

            while(n--)
            {
                if(Q>20)
                    Q = Q/2 + 10;
                else 
                    break;
            }
            while(m--)
            {
                if(Q<=0)
                    break;
                else
                {
                    Q = Q-10;
                }
                
            }
            (Q<=0)?cout<<"YES\n":cout<<"NO\n";
        }
}