#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;

	    int q;
	    cin>>q;

	   long long  int ans=0;

	    //int a,b;

	    int h=2*q;
	    int A[h];

	   int a,b;
	   int i=0;
	   while(q--){
	        cin>>a;
	        cin>>b;
	        A[i]=a;
	        A[i+1]=b;
	        i=i+2;
	   }
	 // cout<<h<<endl;
	   //for(int i=0;i<h;i++){
    //     cout<<A[i]<<" ";
	   //}

	   for(int i=0;i<h-1;i++){
           // cout<<A[i]<<" "<<A[i+1]<<" ";
	       ans=ans+abs(A[i]-A[i+1]);
//cout<<ans<<" ";
	   }

	   ans=ans+abs(0-A[0]);

	   cout<<ans<<endl;

	}
	return 0;
}
