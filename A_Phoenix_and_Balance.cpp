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
       
        ll sumx{0},sumy{0};

        ll n;  cin>>n;

        int div = n/2;

        for(int i=1;i<div;i++)
        {
            sumx += pow(2,i);
            
        }
        for(int i = div ;i<n;i++)
        {
            sumy += pow(2,i);
        }
        cout << sumx - sumy + pow(2,n) <<endl;


    }
}