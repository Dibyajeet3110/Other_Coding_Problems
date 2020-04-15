#include <bits/stdc++.h>
using namespace std;

void bfs(int s,int level[],vector<int>V[],int visited[]){
	level[s]=0;
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
int level[n+1];
vector<int>V[n+1];
int visited[n+1];
for(int i=0;i<=n;i++)
{
	visited[i]=0;
}
	for(int i=0;i<n-1;i++){
		int a;
		int b;
		cin>>a;
		cin>>b;
		V[a].push_back(b);
	}
	int x;
	cin>>x;
	int count=0;
	bfs(1,level,V,visited);
	for(int i=0;i<=n;i++){
		if(level[i]==x){
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}
