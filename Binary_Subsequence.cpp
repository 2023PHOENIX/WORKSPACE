#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
#include<bits/stdc++.h> 
using namespace std;  
  
int maxSubseq(int vec[], int n) {     
    int suffix = 0; 
    for (int i = n - 1; i >= 0; i--) 
    { 
        if (vec[i] == 1) 
        { 
            suffix++; 
            vec[i] = suffix; 
        } 
    }
    int res = 0; 
    int zero = 0;     
    for (int i = 0; i < n; i++) 
    { 
        if (vec[i] == 0) 
            zero++; 
        if (vec[i] > 0) 
            res = max(res, zero + vec[i]); 
    }
    return max(res, zero); 
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin >> T;
	while(T--){
	    int n,i;
	    cin >> n;
	    string s;
	    cin >> s;
	    int arr[n];
	    for(i=0;i<n;i++){
	        arr[i] = s[i] - '0';
	    }
	    cout << (n-maxSubseq(arr,n)) << endl;
	}
	return 0;
}