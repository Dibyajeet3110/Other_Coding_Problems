#include<bits/stdc++.h>
using namespace std;
int ar[100001];
int br[100001];
bool isSorted(int n){
	bool flag1 = true;
	bool flag2 = true;
	for(int i=0;i<n;i++)
	if(ar[i] < ar[i-1]){
		flag1 = false;
		break;
	}
	if(flag1)
	return true;
	br[0] = 1000000000 + 1;
	for(int i=0;i<n;i++)
	if(br[i] > br[i-1]){
		flag2 = false;
		break;
	}
	return flag2;
}
int main(){
	int t , n , k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=0;i<n;i++){
			cin>>ar[i];
			br[i] = ar[i];
		}
		for(int i=0;i<k;i++){
			vector<int> v;
			for(int j=i;j<n;j+=k)
			v.push_back(ar[j]);
			sort(v.begin() , v.end());
			int idx = 0;
			for(int j=i;j<n;j+=k)
			ar[j] = v[idx++];
		}
		for(int i=0;i<k;i++){
			vector<int> v;
			for(int j=i;j<n;j+=k)
			v.push_back(br[j]);
			sort(v.begin() , v.end() , greater<int>());
			int idx = 0;
			for(int j=i;j<n;j+=k)
			br[j] = v[idx++];
		}
		if(isSorted(n))
		cout<<"yes"<<endl;
		else
		cout<<"no"<<endl;
	}
}