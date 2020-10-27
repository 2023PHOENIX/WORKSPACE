 #define ll long long 
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;  cin>>n;
    map<string,int> A;
    while(n--)
    {

        string s;   cin>>s;
       if(A.count(s)==0)
          {  
              cout<<"OK\n";
                A[s] += 1;
          }
        else
        {
            cout<<s<<A[s]<<endl;
            A[s]+=1;
        }
        

    }
}