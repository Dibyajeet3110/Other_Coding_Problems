#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>A[1000];
int visited[1000];
void dfs(int s){
	visited[s]=1;
	for(int i=0;i<A[s].size();i++){
		if(visited[A[s][i]]==0 ){

			visited[A[s][i]]=1;
			dfs(A[s][i]);
		}
	}
}
int main() {
	int n,e;
	cin>>n;
	cin>>e;
	for(int i=0;i<e;i++){
		int a,b;
		cin>>a;
		cin>>b;
		A[a].push_back(b);
		A[b].push_back(a);
	}
	int count=0;
	for(int i=1;i<=n;i++){
		if(visited[i]==0){
		count++;
		dfs(i);
		}
	}
	cout<<count<<endl;
	return 0;
}