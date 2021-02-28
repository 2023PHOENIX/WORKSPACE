#include<bits/stdc++.h>

using namespace std;
int Index(vector<int> w,int x)
{
    auto it = find(w.begin(),w.end(),x);

    if(it==w.end())
        return -1;
    else   
        return it-w.begin();

}
int main()
{
    int t;  cin>>t;
    
    while(t--){
        
        int n;  cin>>n;
        
        vector<int> w(n);
        vector<int> s(n);
        for(auto &i : w)cin>>i;
        for(auto &i : s)cin>>i;
        
        
        vector<int> pos(n);
        for(int i=0;i<n;i++)pos[i] = i;


        vector<int> SortedWeight(n);

        for(int i=0;i<n;i++)
            SortedWeight[i] = w[i];



        sort(SortedWeight.begin(),SortedWeight.end());



        int count = 0;

        
        for(int j=1;j<n;j++)
        {
            int index = Index(w,SortedWeight[j]);
            int p = pos[Index(w,SortedWeight[j-1])];

            int c = index;

            while(c <= p)
            {
                c += s[index];
                pos[index] = c;
                count++;
            }
        }
        cout<<count<<endl;
        
    }
}