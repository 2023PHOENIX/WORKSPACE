#define ll long long 
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

int main()
{
   int n;   cin>>n;

   vector<int> A;

    for(int i=0;i<n;i++)
    {
        int d;  cin>>d;
        A.push_back(d);
    }

    int c{0},maxi{0};

    for(int i=1;i<A.size();i++)
    {
        if(A.at(i-1)<=A.at(i))
            c++;
        else
        {
            if(c>=maxi)
            {
                maxi = c;
            }
        
           c=0;
            
        }
        
    }
    cout<<maxi<<endl;
}