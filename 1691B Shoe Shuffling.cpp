/**
  
  Problem Link : https://codeforces.com/contest/1691/problem/B

**/
#include "bits/stdc++.h"
using namespace std;

#define      int       int64_t 
#define      fastIO    ios_base::sync_with_stdio(false),cin.tie(NULL);
#define      nline     '\n' 
#define      len       size()

void lets_play() {
  int n; 
  cin >> n; 
  vector<int>v(n); 
  map<int,int>mp;
  for(int i = 0; i < n; i++) {
    cin >> v[i]; 
    mp[v[i]]++;
  }   
  bool flag = true;
  for(auto &i : mp) {
    if(i.second == 1) {
        flag = false;
        break;
    }
  }
  if(!flag) {
    cout << - 1 << endl;
    return; 
  }
  vector<int>ans(n + 1); 
  for(int i = 1 ; i <= n; i++) {
    ans[i] = i ;
  }
  for(int i = 0; i < n - 1; i++) {
    if(v[i] == v[i + 1]) swap(ans[i + 1],ans[i + 2]); 
  }
  for(int i = 1; i <= n; i++) {
    cout << ans[i] <<" "; 
  }
  cout << endl; 


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