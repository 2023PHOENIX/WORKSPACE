#define ll long long 
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n;  cin>>n;

    vector<ll> A;
    for(int i=0;i<n;i++)
    {
        ll d;  cin>>d;
        A.push_back(d);
    }
    int c{1},s{1};
    for(int i=1;i<A.size();i++)
    {
        if(A.at(i)>=A.at(i-1))
           { c++; s = max(c,s);}
        else
        {
            c = 1;

        }
        

    }
    cout<<s<<endl;
}