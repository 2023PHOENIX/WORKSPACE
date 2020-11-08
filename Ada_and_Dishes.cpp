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

        vector<int> A;

        while(n--)
        {
            int d;  cin>>d;
            A.push_back(d);
        }

        int sum{0};
        for(int i=0;i<A.size()-1;i++)
        {
            sum+=A.at(i);
        }


        if(sum<=A.at(A.size()-1))
            {
                cout<<A.at(A.size()-1)<<endl;
            }
        else
        {
            int Z{0};

            sort(A.rbegin(),A.rend());

            for(int i=0;i<A.size()-1;i++)
            {
               if(A.at(i)==A.at(i+1))
                {
                    Z+=A.at(i);
                    i++;
                    continue;
                }
                int X = A.at(i+1);
                A.at(i+1) = A.at(i+1)-A.at(i);

                Z+=X;
            }
            cout<<Z<<endl;
        }
        
        
    }
}