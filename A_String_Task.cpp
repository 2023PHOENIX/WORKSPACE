#define ll long long 


const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string S;   cin>>S;

    transform(S.begin(),S.end(),S.begin(),::tolower);

    for(int i=0;i<S.size();i++)
    {
        if(S.at(i)=='a'||S.at(i)=='e'||S.at(i)=='o'||S.at(i)=='u'||S.at(i)=='i'||S.at(i)=='y')
            S.erase(S.begin()+i);
        else
        {
            char s = '.';
            S.at(i-1)+=s;
        }
        
    }
    cout << S;
    
}