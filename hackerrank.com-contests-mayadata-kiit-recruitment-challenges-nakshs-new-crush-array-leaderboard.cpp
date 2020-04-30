#include <bits/stdc++.h>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
   long long int A[n+1][n+1];
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int x=i+j;
            int flag=1;
            int sum=0;
            while(x>0){
                int y=x%10;
                x=x/10;
                flag++;
                if(flag%2==0){
                    sum=sum+y;
                }
                else{
                    sum=sum-y;
                } 
            }
            A[i][j]=abs(sum);
        }
    }
    long long int ans=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            ans=ans+A[i][j];
        }
    }
    cout<<ans<<endl;
    
    }  
    return 0;
}