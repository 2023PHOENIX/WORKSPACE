const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    
    int n ; cin>>n;

    int k{n-1};

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(k==j)
                cout<<"*";
            cout<<" ";

            k--;
        }
    }
}