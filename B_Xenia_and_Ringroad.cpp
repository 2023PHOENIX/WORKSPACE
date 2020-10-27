#define ll long long 
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>
using namespace std;

int main()
{
  ll n,k;  cin>>n>>k;
    ll i{1},count{0};
  while(k--)
  {
      ll z;    cin>>z;
      
      if(i<=z)
      {
          count+=(z-i);
          i = z;
          continue;
      }
      else
      {
          count += n -(i-z);
          i = z;
      }
      
  }
  cout<<count<<endl;
}