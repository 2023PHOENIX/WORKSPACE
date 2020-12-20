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
        for(int i=0;i<n;i++)
        {
            int d;  cin>>d;
            A.push_back(d);
        }

        vector<int> B;
        auto t = A.begin();
        for(int i=0;i<A.size();i++)
        {    
            int flag = false;
            for(int j=i+1;j<A.size();j++)
            {   
                if(A.at(i)==A.at(j))
                  {
                     B.erase(t);
                    flag = true;
                  }
            }

            t++;
            if(flag == false)
                B.push_back(A.at(i));
        }


        for(auto i: B)
            cout<<i<<" ";
        cout<<endl;

        sort(B.begin(),B.end(),greater<int>());

        auto it = find(A.begin(),A.end(),B.at(0));
        if(it!=A.end())
            cout<<*it<<endl;
        else 
            cout<<-1<<endl;

        


    }
}