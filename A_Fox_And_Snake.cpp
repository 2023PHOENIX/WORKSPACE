#define ll long long 
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;


int main()
{
    int a,b;    cin>>a>>b;
   
    int ht{b},dt{0};
    
        for(int j=0;j<a;j++)
        {
           if(j%2==0)
           {
             for(int z=0;z<dt;z++)
                cout<<".";
            for(int k=0;k<ht;k++)
                cout<<"#";
            

            cout<<endl;
            dt++;
            ht--;
           }
           else
              {  for(int z=0;z<ht;z++)
                  {  cout<<"#";}
                cout<<endl;
              }
        }
        
    
}