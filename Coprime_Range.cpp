const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<int> V;
bool * Eratosthenes(ll n)
{

  bool *Isprime  = new bool[n+1];

  for(ll i=1;i<=n;i++)
    Isprime[i] = true;


  for(ll i=2;i<=sqrt(n);i++)
  {
    if(Isprime[i]==true)
    {
      for(int j=i*2;j<=n;j+=i)
      {
        Isprime[j] = false;
      }

    }
  }
  return Isprime;
}


ll find(int L,int R)
{
    ll n = 1000000;
   auto prime = Eratosthenes(n);

   for(ll i=0;i<n;i++)
   {
       if(prime[i])
       {
           for(ll j=L;j<=R;j++)
           {
              bool flag = true;
               if(j%i==0)
               {
                flag = false;
                break;
               }
               if(flag = true)
               {
                   return i;
               }
           }
       }
   }

   return -1;
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin>>t;

    while(t--)
    {
       ll L,R;    cin>>L>>R;

        cout<<find(L,R)<<endl;
        
    }
}