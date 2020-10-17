#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;  cin>>n;

    int q;  cin>>q;
    int count{0};
    int C{0};
    vector<int> A;
    for(int i=0;i<n;i++)
    {
        int d;  cin>>d;
        A.push_back(d);
    }


    C = A.at(q);

    for(int i=0;i<A.size();i++)
    {
       
       { 
           if(A.at(i)>=C && A.at(i)>0)
            count++;
       }

    }
    cout << count << endl;

}