const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    ll  d1,d2,d3;
    cin>>d1>>d2>>d3;

    ll X = min(d1+d2,d3);
    cout<<X*2<<endl;
}