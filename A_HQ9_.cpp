#define ll long long 


const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string S;   cin>>S;

    int flag = 0;
    for(auto i : S)
        {
            if(i=='H' || i=='Q'|| i == '9')
              {  flag = 1;break;    }
            else
            {
                flag = 0;
            }
            
        }

    (flag==1)?cout<<"YES\n":cout<<"NO\n";
}