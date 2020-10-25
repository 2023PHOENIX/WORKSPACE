#define ll long long 


const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;  cin>>n;
    int sum{0};
    while(n--)
    {
        int d;  cin>>d;

        sum+=d;
    }

    cout << sum%4 + sum/4 <<endl;
}