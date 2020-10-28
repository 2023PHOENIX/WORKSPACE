#define ll long long 
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;  cin>>n;
    queue<int> one,two,three;

    for(int i=1;i<=n;i++)
    {
        int d;  cin>>d;

        if(d==1)
            one.push(i);
        if(d==2)
            two.push(i);
        if(d==3)
            three.push(i);
            
    }
    int mi = min(one.size(), min(two.size(),three.size()));
    cout<<mi<<endl;
    
    
    for(int i=1;i<=mi;i++)
    {
        cout<<one.front()<<" "<<two.front()<<" "<<three.front()<<endl;

        one.pop();
        two.pop();
        three.pop();
    }
    
   
    








}