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
        int flag = false;
        int x,y,z;  cin>>x>>y>>z;

        if(x+y==z || y+z==x || z+x==y)
            flag = true;
        
        (flag)?cout<<"YES":cout<<"NO";
        cout<<endl;
    }
}