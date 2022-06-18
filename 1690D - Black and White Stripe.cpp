#include "bits/stdc++.h"
using namespace std;

//#define      int       int64_t 
#define      fastIO    ios_base::sync_with_stdio(false),cin.tie(NULL);
#define      nline     '\n' 
#define      len       size()

void lets_play() {
 long long  n , k;
 cin >> n >> k ;
 string s; 
 cin >> s; 
 vector<long long >v(n + 1); 
 for(long long  i = 1; i <= n ; i++){
   v[i] = v[i - 1] + (long long ) (s[i - 1] == 'W'); 
 }
 long long  ans = INT_MAX;
 for(long long  i = k; i <= n; i++) {
   ans = min(ans, (v[i] - v[i - k]));
 }
 cout << ans << endl;
 return; 

}

int32_t main() {
    fastIO
    
    int t;
    cin>>t;
    //t = 1; 
    while(t--) {
        lets_play();
    }
    return 0 ; 
    
}