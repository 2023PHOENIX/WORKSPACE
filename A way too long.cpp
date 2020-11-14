#define ll long long 


const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

int main()
{

  int t;  cin>>t;
  while(t--)
  {
  string S; cin>>S;

  if(S.length()>10)
  {
    cout << S.at(0) << S.size()-2 << S.at(S.size()-1);
  }
  else
  {
    for(auto i : S)
      cout << i ;
  }

	cout << endl;
  }
  
}