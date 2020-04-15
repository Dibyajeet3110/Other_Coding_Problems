#include <bits/stdc++.h>
using namespace std;
int visited[101];
vector<int>V[101];
int level[101];
void bfs(int s){
	level[s]=1;
	visited[s]=1;
	queue<int>Q;
	Q.push(s);
	while(!Q.empty()){
		int p=Q.front();
		Q.pop();
		for(int i=0;i<V[p].size();i++){
			if(visited[V[p][i]]==0){
				visited[V[p][i]]=1;
				level[V[p][i]]=level[p]+1;
				Q.push(V[p][i]);
			}
		}
	}
}
int main(){
	int n;
	cin>>n;
for(int i=1;i<=n;i++){
	visited[i]=0;
}
	for(int i=1;i<=n-1;i++){
		int a;
		int b;
		cin>>a;
		cin>>b;
		V[a].push_back(b);
		V[b].push_back(a);
	}
	int x;
	cin>>x;
	int count=0;
	bfs(1);
	for(int i=1;i<=n;i++){
		if(level[i]==x){
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}