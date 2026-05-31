#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--){
	    
	    
	    ll n;
	    cin>>n;
	    
	    vector<ll>a(n);
	    
	    for(int i=0; i<n; i++)  cin>>a[i];
	    
	    sort(a.begin(),a.end()); // sort 
	    
	    int ct = 0;
	    int l = 0,r = n-1;
	     // until you dont get l and r pointer values same till then loop and ct
	    while(l <= r){
	        
	        if(a[l] == a[r])
	            break;
	            
	        ct++;
	        
	        l++;
	        r--;
	    }
	    
	    cout<<ct<<"\n";
	}
	
	return 0;

}
