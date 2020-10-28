#define ll long long 
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string S;   cin>>S;
    vector<int> A;

    
    for(int i=0;i<S.size();i=i+2)
    {
        int t = (int)S.at(i)-48;
        A.push_back(t);
    }
    sort(A.begin(),A.end());

    for(int i=0;i<A.size()-1;i++)
    {
        cout<<A.at(i)<<"+";
    }
    cout<<A.at(A.size()-1);

    
}