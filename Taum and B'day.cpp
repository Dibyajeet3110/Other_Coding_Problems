#include <bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long T,b,w,bc,wc,z,ans;
    cin >> T;
    for(unsigned long long int i = 1; i <= T; i++){
        cin >> b >> w;
        cin >> bc >> wc >> z;
    unsigned  long long int total=b+w;
    unsigned long long int cost1;
    unsigned long long int cost2;
    if(bc<=wc){
        cost1=(bc*total) + (z*w);
        cost2=(bc*b) + (wc*w);
    }
    else if(bc>wc){
        cost1=(wc*total) + (z*b);
        cost2=(bc*b) + (wc*w);
    }
    if(cost1>cost2){
        cout<<cost2<<endl;
    }
    else{
        cout<<cost1<<endl;
    }
    }
    return 0;
}