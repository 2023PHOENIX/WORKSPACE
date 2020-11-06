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

    vector<int> A;
    vector<int> B;
    vector<int> C;

    for(int i=0;i<n;i++)
    {
        int d;  cin>>d;
        A.push_back(d);
    }
    for(int i=0;i<n-1;i++)
    {
        int d;  cin>>d;
        B.push_back(d);
    }
    for(int i=0;i<n;i++)
    {
        int d;  cin>>d;
        C.push_back(d);
    }

    vector<int> k;

    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    sort(C.begin(),C.end());


        for(int j=0;j<B.size();j++)
        {
            int c{0};
            for(int i=0;i<A.size();i++)
            {
                if(A.at(i)==B.at(j))
                {   
                    B.at(i) = -1;break;
                }
                if(A.at(i)!=B.at(j))
                 {   c++; 
                 if(c==A.size()-1)
                    cout<<A.at(i);
                 }

            }
            
        }
    
}