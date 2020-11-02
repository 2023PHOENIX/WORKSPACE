#define ll long long 
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int b;  cin>>b;

    vector<int> B;
    for(int i=0;i<b;i++)
    {
        int d;  cin>>d;
        B.push_back(d);
    }
    vector<int> G;
    int g;  cin>>g;

    for(int i=0;i<g;i++)
    {
        int d;  cin>>d;
        G.push_back(d);
    }

    sort(B.begin(),B.end());
    sort(G.begin(),G.end());
    int c{0};
    for(int i=0;i<B.size();i++)
    {
        for(int j=0;j<G.size();j++)
        {
            if(abs(B.at(i)-G.at(j))<2)
            {
                G.at(j) = INT_MAX;
                c++;
                break;

            }
        }
    }
    cout<<c<<endl;
}