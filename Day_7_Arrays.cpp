const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;  cin>>n;
    vector<int> A;
    while(n--)
    {
        int d;  cin>>d;
        A.push_back(d);
    }

    for(auto it=A.rbegin();it!=A.rend();it++)
    {
        cout<<*it<<" ";
    }
}