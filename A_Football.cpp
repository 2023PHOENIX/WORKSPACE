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
    string z;   cin>>z;
    string k;
    int c{0};
    for(int i=1;i<n;i++)
    {
        string S;   cin>>S;

        if(S==z)
            c++;
        if(S!=z)
            k =S;

    }
    int q = c+1;
    int l = n-(c+1);

    (q>l)?cout<<z<<endl:cout<<k<<endl;
}