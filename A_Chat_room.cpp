#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s = "hello";

    string ss;  cin>>ss;
    int j{0},count{0};
    for(int i=0;i<ss.size();i++)
    {
        if(s.at(j)==ss.at(i))
        {
            j++;
            count++;
        }

        if(count==5)
            break;
    }
    (count==5)?cout<<"YES\n":cout<<"NO\n";
    
}