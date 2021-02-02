const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

string solve(vector<int> v,int n,int k)
{
    int total = 0;
    bool slow = false;
    int bot = 0;
    for(auto i: v)
    {
        if(i>=0)
            total++;

        if(i>k)
            slow=true;
        
        if(i==1||i==0)
            bot++;
        


    }
    
    if(bot==n)
        return "Bot";
    if(total<(n%2 + n/2))
        return "Rejected";
    else if(slow==true)
        return "Too Slow";
    else 
        return "Accepted";    
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin>>t;

    while(t--){
        int n,k;    cin>>n>>k;

        vector<int> v;  
        for(int i=0;i<n;i++)
        {
            int d;  cin>>d;
            v.push_back(d);
        }
    cout<<solve(v,n,k)<<endl;

    }


}