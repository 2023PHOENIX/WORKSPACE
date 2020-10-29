#define ll long long 
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;
int cd(int n)
{
    int c{0};

    while(n>=10)
    {
        c++;
        n = n/10;
    }
    return c;

}
int main()
{
    int t;  cin>>t;
   while(t--){
    int n;  cin>>n;
   cout<<cd(n)*10<<endl;
       while(n>0)
    {
        int k = cd(n)*10;
        
        cout<<n/k<<" ";

        n = n/10;
    }cout<<endl;
    }

}