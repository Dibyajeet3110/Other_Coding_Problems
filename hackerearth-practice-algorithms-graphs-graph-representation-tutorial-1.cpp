#include<bits/stdc++.h> 
using namespace std;
int main()
    {
        int x, y, nodes, edges;
        cin >> nodes;       
        cin >> edges;    
        vector <int> adj[nodes];
        for(int i = 0;i < edges;++i){
                cin >> x >> y;
            adj[x].push_back(y);        
         }
    int q;
    cin>>q;
    while(q--){
        int a,b;
        cin>>a;
        cin>>b;
        int count=0;
        for(int i=0;i<adj[a].size();i++){
            if(adj[a][i]==b){
               count++;
            }
        }
        if(count>0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
    }