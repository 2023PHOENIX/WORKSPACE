#define ll long long 
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;  cin>>n;

   
        vector<pair<int,int>> A;


        for(int i=0;i<n;i++)
        {
            int p1,p2;  cin>>p1>>p2;
            A.push_back(make_pair(p1,p2));

        }
        int c{0};
        for(int i=0;i<A.size();i++)
        {
            for(int j=0;j<A.size();j++)
            {
                if(A.at(i).first == A.at(j).second)
                    c++;

            }
        }

        cout<<c<<endl;
    
}