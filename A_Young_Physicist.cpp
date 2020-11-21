const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;  cin>>n;
    int sx{0},sy{0},sz{0};
    while(n--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        sx += a;
        sy += b;
        sz += c;
    }
    (sx==0 and sy==0 and sz==0)?cout<<"YES\n":cout<<"NO\n";
}