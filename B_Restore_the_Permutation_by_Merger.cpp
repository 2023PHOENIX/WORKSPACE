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
       int n;   cin>>n;
       vector<int> A;


       for(int i=0;i<2*n;i++)
       {
           int d;   cin>>d;
            bool flag{false};
           for(auto i: A)
            {
                if(i==d)
                    flag = true;

            }
            if(!flag)
                A.push_back(d);
            
       }

       for(auto i: A) 
            cout<<i<<" ";
        cout<<endl;

   }
}