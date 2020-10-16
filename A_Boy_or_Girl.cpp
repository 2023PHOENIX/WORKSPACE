#include<bits/stdc++.h>

using namespace std;

int main()
{
    string S;   cin>>S;

    set<char> se;

    for(auto i : S)
        se.insert(i);

    if(se.size()%2==0)
        cout << "CHAT WITH HER!\n";
    else
    {
        cout <<"IGNORE HIM!\n";
    }
    
}