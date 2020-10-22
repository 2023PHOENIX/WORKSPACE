#define ll long long 


const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;  cin>>a>>b>>c;

    cout << max( max(a+b+c, (a+b)*c),max(a*b*c,(a+c)*b));

}

