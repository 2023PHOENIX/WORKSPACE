 #define ll long long 
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> A;
    
    for(int i=0;i<4;i++)
    {
        int d;  cin>>d;
        A.push_back(d);

    }
    sort(A.begin(),A.end());

    cout<<A.at(3)-A.at(0)<<" ";
    cout<<A.at(3) - A.at(2)<<" ";
    cout<<A.at(3) - A.at(1)<<" ";
}