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

        string a,b;   cin>>a>>b;

        set<char> a1,b1;

        for(auto i : a)
            a1.insert(i);
        for(auto i : b)
            b1.insert(i);
        
        cout<<a1.size()<<" "<<b1.size()<<"\n";

      
    }
}