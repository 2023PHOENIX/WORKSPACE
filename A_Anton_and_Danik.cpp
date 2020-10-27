#define ll long long 
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;  cin>>n;
    string S;   cin>>S;
    int d_count{0},a_count{0};

    for(auto i: S)
     {   if(i=='D')
            d_count++;
        if(i=='A')
            a_count++;
     }
        
    (d_count>a_count)?cout<<"Danik\n":(d_count<a_count)?cout<<"Anton\n":cout<<"Friendship\n";


}