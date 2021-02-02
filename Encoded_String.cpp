#include<bits/stdc++.h>

using namespace std;

long long convertBinary(string s){
    int base = 1;
    int len = s.length();
    long long value = 0;  

    for(int i= len-1;i>=0;i--){
        if(s[i]=='1')
            value += base;
        base *= 2;        
    }

    return value;
}

int main(){
    int t;  cin>>t;
    while(t--){
    int n;  cin>>n;
    string s;   cin>>s;
    int i{0};
    while(i<s.length()){
        string K;
        for(int j=i;j<i+4;j++)
        {
            K.push_back(s[j]);
        }
        cout<<(char)('a'+convertBinary(K));

        i+=4;

        
    }
    cout<<endl;
    }
}