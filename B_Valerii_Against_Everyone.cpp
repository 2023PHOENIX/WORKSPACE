const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool findPartiion(vector<ll> arr, int n)
{
    int sum = 0;
    int i, j;
 
    for (i = 0; i < n; i++)
        sum += arr[i];
 
    if (sum % 2 != 0)
        return false;
 
    bool part[sum / 2 + 1][n + 1];
 
    for (i = 0; i <= n; i++)
        part[0][i] = true;
 

    for (i = 1; i <= sum / 2; i++)
        part[i][0] = false;

    for (i = 1; i <= sum / 2; i++) {
        for (j = 1; j <= n; j++) {
            part[i][j] = part[i][j - 1];
            if (i >= arr[j - 1])
                part[i][j] = part[i][j]
                             || part[i - arr[j - 1]][j - 1];
        }
    }
     return part[sum / 2][n];
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin>>t;

    while(t--)
    {
        int n;  cin>>n;
        vector<ll> A;
        bool flag{true};
        for(int i=0;i<n;i++)
        {
            ll d;  cin>>d;
            int z = pow(d,2);
            A.push_back(z);
            if(d>n)
                flag=false;
        }
    if(findPartiion(A,A.size())==false)
    {
        flag = false;
    }
    (flag)?cout<<"YES\n":cout<<"NO\n";


    }
}