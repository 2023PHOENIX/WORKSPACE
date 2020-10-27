#define ll long long 
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ll n;cin>>n;int count{0};
    while(n--)
    {
        string S;   
        cin>>S;
        if(S=="Tetrahedron")
            count+=4;
        else if(S=="Cube")
            count+=6;
        // Octahedron. Octahedron has 8 triangular faces.Dodecahedron. 
        // Dodecahedron has 12 pentagonal faces.
// Icosahedron 20
        else if(S=="Octahedron")
            count+=8;
        else if(S=="Dodecahedron")
            count+=12;
        else 
            count+=20;
        
    }
    cout<<count<<endl;
}