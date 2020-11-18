#include<bits/stdc++.h>

using namespace std;

vector<int> Sieve(int n)
{
  vector<bool> prime(true,n+1);


  vector<int> Prime;

  for(int i=2;i<=n;i++)
  {
    if(prime[i]==true)
      for(int j=i*i;j<=n;j+=i)
          prime.at(j) = false;
  }
  for(int i=1;i<=n;i++)
      if(prime[i]==true)
        Prime.push_back(i);

  return Prime;
}

int main()
{
  int n = 10;
  cout<<Sieve(10);
}
