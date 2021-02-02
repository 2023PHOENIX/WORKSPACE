const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(int *arr,int N,int K){

    sort(arr,arr+N,greater<int>());

    int t{0},i{0},j{0};
    int sumA{0},sumB{0};
    int counter{0};


    while(i<N){
        sumA += arr[i];
        counter++;
        if(sumA >=K)
            break;
        
        for(j=i+1;j<N;j++)
            if(K-sumA>=arr[j])
                t = 1;
        if(t==1)
            sumA+= arr[i];swap(arr[i+1],arr[j]);
        if(t!=1)
        {
            
            while(sumA<K)
            {
                sumA += arr[i++];
            }
        }

        i++;
    }
    

    

}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin>>t;

    while(t--){

        int N,K;    cin>>N>>K;

        int *arr = new int[N];

        for(int i=0;i<N;i++)cin>>arr[i];

        solve(arr,N,K);

    }
   
    
}