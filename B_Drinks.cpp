#define ll long long 
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;  cin>>n;
    double sum{0};   
     for(int i=0;i<n;i++)
    {
        double p{0};
        cin>>p;
        sum+=p;
    }
    cout << fixed << setprecision(12)<<sum/n;
    }