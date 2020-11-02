#define ll long long 
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

int main()
{
  int t;    cin>>t;
  while(t--) 
  { int n;  cin>>n;
    vector<int> A;
    for(int i=0;i<n;i++)
    {
        int d;  cin>>d;
        A.push_back(d);
    }

   sort(A.begin(),A.end());
    int s{INT_MAX};
   for(int i=1;i<A.size();i++)
   {
       int k = A.at(i)-A.at(i-1);

       s = min(k,s);
   }
   cout<<s<<endl;
  }

}