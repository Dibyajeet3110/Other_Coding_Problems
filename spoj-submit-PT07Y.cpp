#include <bits/stdc++.h>
using namespace std;

long long int vis[10001];
vector<int long long>A[10001];

void dfs(int s){
	vis[s]=1;
	for(int child : A[s] ){
		if(vis[child]==0){
			dfs(child);
		}
	}
}
int main() {
	// your code goes here
	int n,e;
	cin>>n;
	cin>>e;
	
	int a,b;
	
	for(int i=1;i<=e;i++){
		
		cin>>a;
		cin>>b;
		A[a].push_back(b);
		A[b].push_back(a);
	}
	// for(int i=0;i<=n;i++){
	// 	vis[i]=0;
	// }
	int count=0;
	
	for(int i=1;i<=n;i++){
		if(vis[i]==0){
			count++;
			dfs(i);
		}
	}
	
	if(count==1 && e==n-1){
		cout<<"YES"<<endl;
	}
	else {
		cout<<"NO"<<endl;
	}
	
	return 0;
}