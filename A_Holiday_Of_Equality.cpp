#define ll long long 


const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;  cin>>n;
    ll max{INT_MIN};
    vector<ll> A;
    while(n--)
    {
        ll d;  cin>>d;
        if(max < d)
            max = d;
        A.push_back(d);
    }
    int count{0};
    for(auto i : A)
        {
            while(i <  max)
                {
                    i++;
                    count++;
                }
        }

        cout << count << endl;
    
    
}