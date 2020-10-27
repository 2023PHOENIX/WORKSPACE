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

        vector<int> A;

        for(int i=0;i<n;i++)
        {
            int d;  cin>>d;
            A.push_back(d);
        }

        sort(A.begin(),A.end());
    bool greater{false};
        for(int i=0;i<A.size()-1;i++)
        {
            if(A.at(i+1)-A.at(i)>1)
              { 
                   greater = true;
                    break;
              }
        }

        (greater)?cout<<"NO\n":cout<<"YES\n";
    }
}