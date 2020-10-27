#include<bits/stdc++.h>
using namespace std;

int main()
{
    string S;   cin>>S;
    bool lower{false};
    for(auto i: S)
    {
        if(islower(i))
        {
            lower=true;break;
        }
    }
    if(lower)
    {
        transform(S.begin(),S.end(),S.begin(),::tolower);
        S.at(0) = toupper(S.at(0));
        cout<<S;
    }
    else
    {
        cout<<S;
    }

    
}