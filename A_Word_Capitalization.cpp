#include<bits/stdc++.h>

using namespace std;


int main()
{
    string S;   cin>>S;

    S.at(0) = toupper(S.at(0));

    for(auto i : S)
        cout << i ;
}