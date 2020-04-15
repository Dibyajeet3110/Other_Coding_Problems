#include <bits/stdc++.h>
using namespace std;
vector<int>A[100];
int visited[100];
void dfs(int s){
	visited[s]=1;
	for(int child: A[s]){
		if(visited[child]==0){
			dfs(child);
		}
	}
}
int main() {
	int n,m;
	cin>>n;
	cin>>m;
	int a,b;
	for(int j=1;j<=n;j++){
		visited[j]=0;
	}
	for(int i=0;i<m;i++){
		cin>>a;
		cin>>b;
		A[a].push_back(b);
		A[b].push_back(a);
	}
	int x;
	cin>>x;
	dfs(x);
	int count=0;
	for(int i=1;i<=n;i++){
		if(visited[i]==0){
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}