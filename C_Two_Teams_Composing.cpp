const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin>>t;

    while(t--)
    {
        int n;  cin>>n;
        vector<int> A;

        for(int i=0;i<n;i++)
        {
            int d;  cin>>d;
            A.push_back(d);
        }

        sort(A.begin(),A.end());
       
       int c{0},sum{0};

       for(int i=0;i<A.size()-1;i++)
       {
           if(A.at(i)==A.at(i+1))
                c++;
          if(c!=0)
          {  if(A.at(i)!=A.at(i+1))
            {
                sum = max(sum,c);
                c = 0;
            }
          }
            
       }
       cout<<sum<<endl;
    }
}