#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	long long int n;
	cin>>n;
	long long int A[n];
	long long int B[n];
	for(long long int i=0;i<n;i++){
		cin>>A[i];
	}
	for(long long int i=0;i<n;i++){
		cin>>B[i];
	}
	sort(A,A+n);
	sort(B,B+n);
	vector<long long int>C;
	vector<long long int>D;
	long long int count=0;
	for(int i=0;i<n;i++){
		if(A[i]>B[i]){
			count++;
		}
		else if(A[i]<=B[i]){
			C.push_back(A[i]);
			D.push_back(B[i]);
		}
	}
	sort(D.begin(),D.end());
	sort(C.begin(),C.end(),greater<int>());
	for(int i=0;i<C.size();i++){
		if(D[i]<C[i]){
			count++;
		}
	}
	cout<<count<<endl;
}
}