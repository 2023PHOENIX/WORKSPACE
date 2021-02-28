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
        int n,k;    cin>>n>>k;

        vector<int> v(k);

        for(auto &i : v)
            cin>>i;
        
        // for(auto &i : v)
        //     cout<<i<<" ";
        // cout<<endl;
        vector<string> St;

        for(int i=0;i<n;i++)
        {
            string s;   cin>>s;
            St.push_back(s);
        }
        // for(auto &i : St)
        //     cout<<i<<endl;
        vector<ll> result;
        for(auto bstr: St)
        {
            ll res = 0;
            for(int i=0;i<bstr.length();i++)
            {
                if(bstr[i] == '1')
                    res+=v[i];
                else
                    res+=0;
            }

            result.push_back(res);
        }
        for(auto &i : result)cout<<i<<endl;
        
    }

}