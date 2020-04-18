#include<bits/stdc++.h>
using namespace std;
vector<int>A[1000];
int vis[1000];
int dis[1000];
void dfs(int s,int d){
	vis[s]=1;
	dis[s]=d;
	for(int child:A[s]){
		if(vis[child]==0){
			dfs(child,dis[s]+1);
		}
	}
}
int main() {
int n;
cin>>n;
int a,b;
for(int i=1;i<n;i++){
	cin>>a;
	cin>>b;
	A[a].push_back(b);
	A[b].push_back(a);
}
for(int i=0;i<=n;i++){
	vis[i]=0;
	dis[i]=0;
}
	int d=0;
for(int i=1;i<=n;i++){
	if(vis[i]==0){
		dfs(i,d);
	}
}
int min=10000;
int res=10000;
int q;
cin>>q;
for(int j=0;j<q;j++){
	int h;
	cin>>h;
	if(dis[h] < min && res > h  ){
		res=h;
	}
}
cout<<res<<endl;
}