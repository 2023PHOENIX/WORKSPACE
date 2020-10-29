#define ll long long 
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;  

bool cmp(pair<int,int> &a,pair<int,int> &b)
{
    return a.second<b.second;
}
int main()
{
    int n;  cin>>n;
    vector<pair<int,int>> A;
    for(int i=0;i<n;i++)
    {
        int d;  cin>>d;
        A.push_back(make_pair(i+1,d));
    }

    sort(A.begin(),A.end(),cmp);

    for(auto i: A)
        cout<<i.first<<" ";
}