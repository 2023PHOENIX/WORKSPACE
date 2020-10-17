#define ll long long 


const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> A{4,7,47,74,444,447,474,477,744,777};

    int n;  cin>>n;
    int flag{0};
    for(auto i : A)
    {
        if(n%i==0)
            flag = 1;
    }
    (flag==1)?cout<<"YES\n":cout<<"NO\n";
}