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
        int l,r;    cin>>l>>r;

        if(2*l<=r)
            cout<<l<<" "<<2*l<<endl;
        else 
            cout<<-1<<" "<<-1<<endl;
            
    }
}