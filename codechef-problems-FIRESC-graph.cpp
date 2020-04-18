#include <bits/stdc++.h>
using namespace std;
vector<int>A[100001];
int vis[100001];
int val;
void dfs(int s){
    vis[s]=1;
    val++;
    for(int child:A[s]){
        if(vis[child]==0){
            dfs(child);
        }
    }
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n;
	    cin>>m;
	    for(int i=1;i<=n;i++){
	        vis[i]=0;
	        A[i].clear();
	    }
	    int a,b;
	    for(int i=0;i<m;i++){
	        cin>>a;
	        cin>>b;
	        A[a].push_back(b);
	        A[b].push_back(a);
	    }
	    int count=0;
    long long int res=1;
	    for(int i=1;i<=n;i++){
	        if (vis[i]==0){
                val=0;
	            dfs(i);
	            count++;
	            res=(res*val)%1000000007;
	        }
	    }
	    cout<<count<<" "<<res<<endl;
	}
	return 0;
}