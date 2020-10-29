#define ll long long 


const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

int main()
{
   string s;    cin>>s;
    char d{'.'};
   string nw;
   transform(s.begin(),s.end(),s.begin(),::tolower);

   for(auto i : s)
   {
       if(i!='a'&&i!='o'&&i!='y'&&i!='e'&&i!='u'&&i!='i')
                {

                    nw.push_back(d);
                    nw.push_back(i);
                }
   }
   cout<<nw<<endl;
    
}