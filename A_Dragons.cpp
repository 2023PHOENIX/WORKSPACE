#define ll long long 
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

bool s(pair<int,int> a,pair<int,int> b)
{
    return b.first > a.first;
}
int main()
{
    int S;  cin>>S;

    int n;  cin>>n;

    vector<pair<int,int>> A;

    for(int i=0;i<n;i++)
    {
        int d;  cin>>d;
        int m;  cin>>m;

        A.push_back(make_pair(d,m));
    }
    bool lose{false};


    sort(A.begin(),A.end(),s);
    for(auto it = A.begin();it!=A.end();it++)
    {
        if(n > it->first)
            {
                n = n+it->second;
            }
        if(n<=it->first)
            {
                lose = true;
                break;
            }
    }

    (lose==true)?cout<<"NO\n":cout<<"YES\n";
}