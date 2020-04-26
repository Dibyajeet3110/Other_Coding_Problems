#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	   long long  int n,s;
	    cin>>n;
	    cin>>s;
	   // cin>>n;
	   // cin>>s;
	    int A[n];
	    int B[n];
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	    }
	    for(int j=0;j<n;j++){
	        cin>>B[j];
	    }
	   long long  int p=INT_MAX;
	   long long  int q=INT_MAX;
	    
	    for(int i=0;i<n;i++){
	        if(B[i]==0){
	           if(A[i]<=p){
	               p=A[i];
	           }
	        }
	    }
	    
	    for(int i=0;i<n;i++){
	        if(B[i]==1)
	        {
	            if(A[i]<=q){
	            q=A[i];
	        }
	    }
	 }
	    
	    if(p+q+s <= 100){
	        cout<<"yes"<<endl;
	    }
	    else {
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
