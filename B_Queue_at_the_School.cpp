const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
        ios_base:: sync_with_stdio(false);
        cin.tie(NULL);
        
        int n,t;    cin>>n>>t;
        string s;   cin>>s;
        while(t--)
        {
            for(int i=1;i<n;i++)
            {
                if(s[i-1] =='B' and s[i]=='G')
                    s[i-1]='G',s[i]= 'B',i++;
            }
        }
        cout<<s<<endl;

}