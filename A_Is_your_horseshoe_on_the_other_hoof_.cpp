#define ll long long 
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

int main()
{

    int count{0};
    vector<ll> A;
    for(int i=0;i<4;i++)
    {
        ll d;  cin>>d;
        A.push_back(d);

        
        
    }
    sort(A.begin(),A.end());
    for(int i=1;i<A.size();i++)
    {
        if(A.at(i-1)==A.at(i))
            count++;
    }
    
    cout << count << endl;
}