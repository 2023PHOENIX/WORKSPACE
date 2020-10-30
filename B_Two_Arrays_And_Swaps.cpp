#define ll long long 
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

int main()
{
   int t;   cin>>t;

   while(t--)
   {
       int n,k;
       cin>>n>>k;

       vector<int> A;
       vector<int> B;

       for(int i=0;i<n;i++)
       {
           int d;   cin>>d;
           A.push_back(d);
       }
       for(int i=0;i<n;i++)
       {
           int d;   cin>>d;
           B.push_back(d);
       }

       sort(A.begin(),A.end());
       sort(B.begin(),B.end(),greater<int>());
        int c{0};

       for(int i=0;i<A.size();i++)
       {
           if(c==k)
                break;
        if(A.at(i)<B.at(i))
        {
           A.at(i) = B.at(i);
           c++;
        }

       }
       int s{0};
       
       for(int i=0;i<A.size();i++)
       {
           s+=A.at(i);
       }

    cout<<s<<endl;

 }
}
