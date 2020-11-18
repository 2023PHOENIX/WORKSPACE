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
        int n,c0,c1,h;
        
        cin>>n>>c0>>c1>>h;

        string s;   cin>>s;
        int cnt0{0},cnt1{0};

        for(int i=0;i<s.length();i++)
        {
            
            if(s.at(i)=='0')
                cnt0++;
        }
        cnt1 = n - cnt0;

        int maximum{0};

        maximum = min((cnt0+cnt1)*c0 + cnt1*h, min(cnt0*c0 + cnt1*c1,cnt0*h+(cnt1+cnt0)*c1));

        cout<<maximum << endl;

    }
}