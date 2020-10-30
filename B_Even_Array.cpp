#define ll long long 
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;  cin>>t;

    while(t--)
    {
        int n;  cin>>n;
        vector<pair<int,int>> A;
        for(int i=0;i<n;i++)
        {
            int d;  cin>>d;
            if(d%2!=i%2)
            {
                A.push_back(make_pair(d%2,i%2));
            }

        }
        int c1{0},c0{0};

        for(auto it=A.begin();it!=A.end();it++)
        {
            if(it->first==1)
                c1++;
            if(it->first==0)
                c0++;
        }
        
        (c0==c1)?cout<<c0<<endl:cout<<-1<<endl;
    }

}