const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool check(vector<string> st)
{
    if(st[0]=="stop")
        return false;

    for(int i=0;i<st.size()-1;i++)
    {
        if(st[i]=="start" and st[i+1]=="start")
            return false;
        if(st[i]=="stop" and st[i+1]=="stop")
            return false;
    }

    return true;
    
    
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int   t;    cin>>t;

    while(t--)
    {
        int n;  cin>>n;

        vector<string> st(n);

        for(auto &i : st)
            cin>>i;
    if(check(st))
        cout<<"200"<<endl;
    else
        cout<<"404"<<endl;
        
    }
}