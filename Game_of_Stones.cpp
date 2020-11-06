const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin>>t;
    bool P{0};
    while(t--)
    {
        int n;  cin>>n;

        while(n>2)
        {

            

        if(n%2==0||n%2==1)
            n = n-2;
        if(n%3==0||n%3==1)
            n = n-3;
        if(n%5==0||n%5==1||n%5==4)
            n = n-5;

        if(P==1)
            P=0;
        else
        {
            P=1;
        }

        
        

            
            
            
            


            
        }
        cout<<P<<endl;
    
    
    }
}