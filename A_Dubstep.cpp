#define ll long long 
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;


int main()
{
    string S;   cin>>S;
    bool first{true};
    for(int i=0;i<S.size();i++)
    {
        if(S.at(i)=='W'&&S.at(i+1)=='U'&&S.at(i+2)=='B')
        {
            i+=2;
            if(first==false)
               { cout <<" ";
                first = true;
               }
               continue;
        }
        else
        {
            first=false;
            cout<<S.at(i);

        }
        
    }
}