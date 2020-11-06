const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    // binary search
    int n;  cin>>n;

    vector<ll> A;
   

    for(int i=0;i<n;i++)
    {
        int d;  cin>>d;
        A.push_back(d);
    }

    ll m;  cin>>m;
    for(int i=0;i<m;i++)
    {
        int c{0};
        ll d;  cin>>d;
        
        for(int j=0;j<A.size();j++)
        {
            if(A.at(j)<=d)
                c++;
        }
        cout<<c<<endl;

    }

    



}

