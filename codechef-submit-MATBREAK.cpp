#include <bits/stdc++.h>
using namespace std;

long long b = (1000*1000*1000)+7;

long long power(long long x, unsigned long long y)  
{  
    long long res = 1;  
  
    x = x % b;
   
    if (x == 0) return 0;
  
    while (y > 0)  
    {  
        if (y & 1)  
            res = (res*x) % b;  
  
        y = y>>1;
        x = (x*x) % b;  
    }  
    return res;  
}  
int main() {
    int t;
    cin >> t;
    while(t--){
        long long n, a;
        cin >> n >> a;
        
        long long ans = 0;
        long long p = 1;
        for(long long i = 1; i<=n; i++){
            p = power(a, ((2*i) -1));
            a = ((a%b) * (p%b))%b;
            ans = ((ans%b) + (p%b))%b;
        }
        cout << ans << endl;
    }
	return 0;
}