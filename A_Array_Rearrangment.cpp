#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;  cin>>t;

    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int c{0};

        for(int i=0;i<n;i++)
        {
            int d;  cin>>d;

            if(d>=m/2)
                c++;
        }
        for(int i=0;i<n;i++)
        {
            int k;  cin>>k;

            if(k>=m/2)
                c++;
        }
        

        (c>n)?cout<<"No\n":cout<<"Yes\n";
        
    }
}