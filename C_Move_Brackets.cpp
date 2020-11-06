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

    while(t--)
    {
        int n;  cin>>n;
        vector<char> A;
        

        for(int i=0;i<n;i++)
        {
            char d; cin>>d;

            if(d=='(')
                A.push_back(d);
            else 
            {
                if(A.size()!=0)
                    A.pop_back();
            }
        }
        cout<<A.size()<<endl;
    }
}