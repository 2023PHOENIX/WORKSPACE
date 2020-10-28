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
        int n;  cin>>n;

        string s;   cin>>s;
        int c{0},sum{0};
        for(int i=1;i<s.size();i++)
        {
            if(s.at(i)==s.at(i-1))
               {
                    c++;

               } 

            if(s.at(i)!=s.at(i-1))
            {
                if(sum<c)
                {
                    sum = c;
                    c=0;
                }
            }

        }
        cout<<sum<<endl;
    }
    
}