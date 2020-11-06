const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
ios_base:: sync_with_stdio(false);
cin.tie(NULL);

// n int -> a1...an
// int is 0 or 1
// only one move allowed 
// i & j 

int n;  cin>>n;
vector<int> A;
while(n--)
{
    int d;  cin>>d;

    A.push_back(d);
}
int c{0},sum{0},c1{0};

if(A.at(0)==1)
    c1++;
for(int i=1;i<A.size();i++)
{
    if(A.at(i-1)==0 && A.at(i)==0)
        c++;
    else
    {
        if(c>sum)
            sum = c;
        c = 0;

    }

    if(A.at(i)==1)
        c1++;
    
    
    
    
}
cout<<sum+c1+1<<endl;



}