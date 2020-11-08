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
    vector<int> block;
    int sum{0};
    vector<int> A;
    while(n--)
    {
        int d;  cin>>d;
        block.push_back(d);
        sum+=d;
        A.push_back(sum);

    }
    

    int worm;   cin>>worm;

    while(worm--)
    {
        int gw; cin>>gw;
        cout<<lower_bound(A.begin(),A.end(),gw)-A.begin()+1<<endl;
    }
}