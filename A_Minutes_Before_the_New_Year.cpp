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
        int hr,mn;  cin>>hr>>mn;
        int time{0};
        if(mn!=0)
        {
            int min = (24-hr-1)*60;
            time+=(60-mn);
            time+=min;
            
        }
        else
        {
            int min = (24-hr)*60;
            time+=min;
        }
        cout<<time<<endl;
        
        
    }
}