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
        int n,k;    cin>>n>>k;

        int sum{2},i{1};

        while(sum<n)
        {
            i++;
            sum+=k;
        }
        cout<<i<<endl;
    }


}   