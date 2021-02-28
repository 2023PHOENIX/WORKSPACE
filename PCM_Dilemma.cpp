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
        string s;   cin>>s;

        unordered_map<char,int> mp;

        for(auto &i : s)
            mp[i] = 1;
        
        if(mp.size()==3)cout<<"YES\n";
        else    cout<<"NO\n";
            
    }
}