const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;  cin>>n;
    vector<string> S;
    while(n--)
    {
        string s;   cin>>s;
        

        S.push_back(s);
    }
    bool flag{false};
   
   for(int i=0;i<S.size();i++)
   {
       for(int j=1;j<S.at(i).size();j++)
       {
           if(S[i].at(j)=='O' && S[i].at(j-1)=='O'&&flag == false)
           {
               
               flag = true;
               S[i].at(j) = '+';
               S[i].at(j-1) = '+';
               
           }

       }
   }

   if(flag)
    {
        cout<<"YES\n";
        for(auto i: S)  
            cout<<i<<endl;
        
    }
    else 
        cout<<"NO\n";

    
}