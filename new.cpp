// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


vector<int> sortByFreq(int arr[],int n);
bool s(pair<int,int> a,pair<int,int> b);
int main() {
	
	
	int t;
	cin >> t;
	
	
	while(t--){
	    
	    
	    int n;
	    cin >> n;
	    
	    int a[n+1];
	    
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    vector<int> v;
	    v = sortByFreq(a,n);
	    for(int i:v)
	        cout<<i<<" ";
	    cout << endl;
	}
	
	return 0;
}

// } Driver Code Ends


//Complete this function
//Return the sorted array

bool s(pair<int,int> a,pair<int,int> b)
{
    if(a.second!=b.second)
        return a.second>b.second;
    return a.first>b.first;
}
vector<int> sortByFreq(int arr[],int n)
{
    //Your code here
    unordered_map<int,int> map;
    
    for(int i=0;i<n;i++)
        map[arr[i]]++;

    vector<pair<int,int>> p;
    for(auto it = map.begin();it!=map.end();it++)
        p.push_back((make_pair(it->first,it->second)));
        
    sort(p.begin(),p.end(),s);
    
    vector<int> v;
    
    for(auto it = p.begin();it!=p.end();it++)
    {
        int k = it->second;
        while(k--)
            v.push_back(it->first);
    }
    return v;
    
}