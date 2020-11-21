const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<int> Sieve(int n)
{
    bool prime[n+1];
    vector<int> primes;

    memset(prime,1,sizeof(prime));

    for(int i=2;i<=sqrt(n);i++){
        if(prime[i] == true)
            for(int j = i*i ;j<=n;j+=i)
                prime[j] = false;
    }
    for(int i=2;i<=n;i++)
    {
        if(prime[i]==true)
            primes.push_back(i);
    }
    return primes;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin>>t;
    vector<int> Primes = Sieve(100000);

    while(t--)
    {
        ll n;  cin>>n;

        ll arr[n+1];

        for(ll i=1;i<=n;i++)
            cin>>arr[i];
        ll res[n+1];

        for(ll i=1;i<=n;i++)
            res[i] = Primes.at(arr[i]);
        
        for(int i=1;i<=n;i++)
            cout<<res[i]<<" ";
        cout<<endl;
    }   
}