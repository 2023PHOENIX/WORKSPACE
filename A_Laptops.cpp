const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int s(pair<int,int> a,pair<int,int> b)
{
    return a.first<b.first;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;  cin>>n;
    
    vector<pair<int,int>> A;

    for(int i=0;i<n;i++)
    {
        int d,k;    cin>>d>>k;
        A.push_back(make_pair(d,k));
    }

    sort(A.begin(),A.end(),s);

    bool flag{false};
    for(int i=1;i<n;i++)
    {
        if(A[i].second < A[i-1].second)
            flag = true;
    }

    (flag==true)?cout<<"Happy Alex\n":cout<<"Poor Alex\n";
}