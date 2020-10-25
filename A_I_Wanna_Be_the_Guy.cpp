#define ll long long 
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int llevel; cin>>llevel;

    int x,y;  cin>>x;
    vector<int> A;
    vector<int> B;
    for(int i=0;i<x;i++)
    {
        int d;  cin>>d;
        A.push_back(d);
    }
    cin>>y;
    for(int i=0;i<y;i++)
    {
        int d;  cin>>d;
        B.push_back(d);
    }
    bool flag{false};
    for(int i=1;i<=llevel;i++)
    {
        auto it = find(A.begin(),A.end(),i);
        if(it==A.end())
        {
            auto t = find(B.begin(),B.end(),i);
            if(t==B.end())
                {
                    flag = true; break;
                }
        }
    }

    (flag==true)?cout<<"Oh, my keyboard!":cout<<"I become the guy.";

}