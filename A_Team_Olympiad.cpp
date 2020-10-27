#define ll long long 
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;  cin>>n;
    // first in last out Queue
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



    int mini = min(one.size(),max(two.size(),three.size()));

    cout<<mini;

    for(int i=1;i<=mini;i++)
    {
        cout<<one.front()<<" "<<two.front()<<" "<<three.front()<<endl;
        one.pop();
        two.pop();
        three.pop();

    }

    

    
    



}