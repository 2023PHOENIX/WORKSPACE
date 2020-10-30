
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

        vector<int> a,b;

        for(int i=0;i<n;i++)
        {
            int d;  cin>>d;
            a.push_back(d);
        }
        for(int i=0;i<n;i++){
            int d;  cin>>d;
            b.push_back(d);
        }

        auto it = min_element(a.begin(),a.end());
        auto it2 = min_element(b.begin(),b.end());

        int ca{0},cb{0};

        for(auto i: a)
            ca += (i-*it);
        for(auto i: b)
            cb += (i-*it2);

        int k = abs(ca-cb);
        
        cout<<min(ca,cb)+k<<endl;

    }
}