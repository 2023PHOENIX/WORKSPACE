const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int kl = k*l;
    int cd = c*d;

    kl = kl/nl;
    p = p/np;
    int sum = min(min(kl,cd),p);
    cout<<sum/n<<endl;

}