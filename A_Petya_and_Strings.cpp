#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int flag{0};
    transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    transform(s2.begin(),s2.end(),s2.begin(),::tolower);

    for(int i=0;i<s1.size() && i < s2.size();i++)
    {
            if(s1.at(i)>s2.at(i))
             {
                   flag = 1; break;
            }
            if(s1.at(i)<s2.at(i))
            {
                flag = -1; break;
            }
            
    }
    cout << flag << endl;
    
    
}