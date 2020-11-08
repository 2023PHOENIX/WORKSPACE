const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n,l;
    cin>>n>>l;
    int r;

    int A[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    sort(A,A+n);

    r = max(A[0],l-A[n-1])*2;

    for(int i=0;i<n-1;i++)
    {
        r = max(r,A[i+1]-A[i]);

    }

    cout<<setprecision(10)<<fixed<<r/2.0<<endl;

}