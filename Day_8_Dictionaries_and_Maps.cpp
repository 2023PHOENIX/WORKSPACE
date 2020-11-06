const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
     int n;  cin>>n;
    string name;
    cin.ignore();
    map<string,long> pbook;
    for(int i=0;i<n;i++)
    {
        string s;   cin>>s;
        long k;     cin>>k;
        
        pbook[s] = k;
    }
    while(cin>>name)
    {
        if(pbook.find(name)!=pbook.end())
            cout<<name<<"="<<pbook.find(name)->second<<endl;
        else 
            cout<<"Not found\n";
    }
}