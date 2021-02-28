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

    while(t--){
        int n;  cin>>n;
        vector<string> v;
        unordered_set<string> s;
        for(int i=0;i<n;i++){
           string d;
            cin>>d; v.push_back(d);
        }

        for(int i=0;i<n;i++)
            s.insert(v[i]);
        int goodString = 0;
        for(int i=0;i<n-1;i++)
        {
            
            for(int j=i+1;j<n;j++)
            {
                string first = v[i];
               string second = v[j];
               if(first[0]==second[0])
                    continue;
                
               swap(second[0],first[0]);
               
            // cout<<first<<" "<<second<<endl;
               if(s.find(second)==s.end() 
               and s.find(first)==s.end())
                goodString+=2;

            }
        }

        cout<<goodString<<endl;
       
    }
}