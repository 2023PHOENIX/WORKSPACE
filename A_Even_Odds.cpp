#define ll long long 
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ll n,k;
    cin>>n>>k;

    if(k<=(n+1)/2)
    {       // since all starting valueu are odd  
        //                         all value increasing by 2; 2*k-1
        cout<< 2*k -1<<endl;
    }
    else
    {
        cout<<(k - (n+1)/2 )*2<<endl;    // simply n+1/2 mid value (k-index) actual index 
                                        // multiply by 2
                                

    }
    

}