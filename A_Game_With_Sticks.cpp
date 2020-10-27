#define ll long long 
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;    cin>>n>>m;

    // P1 = Akshat P2 = Malvika

    //stick been removed we need mininmum between n,m 
    //so we find last option 

    int z = min(n,m);
    // if min is odd then player then p1 winds;
    // else p2 wins;

    (z%2)?cout<<"Akshat":cout<<"Malvika";
}