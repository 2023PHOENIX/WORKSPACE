#define ll long long 
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;   cin>>s;
    string nw;
    int cl{0},cu{0};
    for(auto i : s)
    {    if(islower(i))
            cl++;
        if(isupper(i))
        {
            cu++;
        }
    }


    for(auto i: s)
    {
    if(cl>=cu)
        nw.push_back(tolower(i));
    else
        nw.push_back(toupper(i));
    }
    cout<<nw<<endl;
        
}