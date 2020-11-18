#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;  cin>>t;

    while(t--)
    {
         int n; cin>>n;

         vector<int> A;

        for(int i=0;i<n;i++)
        {
            int d;
            cin>>d;
            A.push_back(d);
        }
        sort(A.begin(),A.end(),greater<int>());
        int S1{0},S2{0};  

        for(auto i : A)
        {
            if(S1 < S2)
                S1+=i;
            else 
                S2+=i;
        }

        cout<<max(S1,S2)<<endl;

    }
}