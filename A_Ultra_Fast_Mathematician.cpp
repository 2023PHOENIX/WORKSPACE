#define ll long long 
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;


int main()
{
    string S;   cin>>S;
    string B;   cin>>B;
    string D;
    for(int i=0;i<S.size();i++)
    {
        if(S.at(i)=='1'&&B.at(i)=='1')
        {
            D.push_back('0');
        }
        if(S.at(i)=='0' && B.at(i)=='0')
        {
            D.push_back('0');
        }
        if(S.at(i)=='1' && B.at(i)=='0' || S.at(i)=='0' && B.at(i)=='1')
        {
            D.push_back('1');
        }
        
    }

    cout<<D;
}