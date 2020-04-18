#include <bits/stdc++.h>
using namespace std;
vector<int>A[10001];
int vis[10001];
int dis[10001];
void bfs(int s){
	vis[s]=1;
	dis[s]=0;
	queue<int>Q;
	Q.push(s);
	while(!Q.empty()){
		int x=Q.front();
		Q.pop();
		for(int child:A[x]){
			if(vis[child]==0){
				Q.push(child);
				vis[child]=1;
				dis[child]=dis[x]+1;
			}
		}
	}
}
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	int m;
	int n;
	cin>>n;
	cin>>m;
	for(int i=1;i<=n;i++){
		vis[i]=0;
		dis[i]=0;
		A[i].clear();
	}
	int a,b;
	while(m--){
		cin>>a;
		cin>>b;
		A[a].push_back(b);
		A[b].push_back(a);
	}
		bfs(1);
		cout<<dis[n]<<endl;
}
return 0;
}