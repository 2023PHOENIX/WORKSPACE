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

        vector<ll> A;
        for(int i=1;i<=n;i++)
        {
            ll d;   cin>>d;

            A.push_back(d);


        }

        ll sum = A.at(0)+A.at(1);
        int indx3{0};
        bool flag{false};
        for(int i=2;i<A.size();i++)
        {
            if(sum<A.at(i))
            {
                indx3 = i;
                flag = true;
                break;
            }
        }
        if(flag)
            cout<<1<<" "<<2<<" "<<indx3+1<<endl;
        else 
            cout<<-1<<endl;
    }
}