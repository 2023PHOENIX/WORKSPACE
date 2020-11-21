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

        int o;  cin>>o;

        string s;   cin>>s;

        while(o--)
        {
            int start,end;  cin>>start>>end;
            start = start -1;
            end = end -1;
            bool startexist{false},endexist{false};
            for(int i=0;i<start;i++)
                if(s[i]==s[start])
                    startexist = true;
            for(int i=end+1;i<s.size();i++)
                if(s[i]==s[end])
                    endexist = true;
            
            if(startexist== true || endexist == true)
                cout<<"YES\n";
            else 
                cout<<"NO\n";

        }
    }
}