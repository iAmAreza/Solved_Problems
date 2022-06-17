// Problem link : https://codeforces.com/contest/1697/problem/B

#include "bits/stdc++.h"
using namespace std;

int32_t main() {
  
 ios_base::sync_with_stdio(false); 
 cin.tie(NULL);
 
 long long  n, q;
 cin >> n >> q; 
 vector<long long >v(n + 1);
 vector<long long >cheap(n + 1 , 0 ); 
 for(long long  i = 1; i <= n; i++) {
    cin >> v[i]; 
 }
 sort(v.begin(),v.end(),greater<long long >()); 

 for(int i = 0; i < n; i++) {
    cheap[i + 1] = cheap[i] + v[i]; 
 }
 
 while(q--) {
    int x, y; 
    cin >> x >> y; 
    cout << cheap[x] - cheap[x - y] << endl;
 }
 return 0 ; 

}