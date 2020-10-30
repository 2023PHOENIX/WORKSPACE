#define ll long long 
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;  cin>>n;
    int c{0};
    
    int k;  cin>>k;

    for(int i=1;i<n;i++)
    {
        int d;  cin>>d;

        if(k>=d)
            c++;
     k = d;

    }

    cout<<c<<endl;
}