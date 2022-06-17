
// Problem link : https://codeforces.com/problemset/problem/1694/A

#include "bits/stdc++.h"
using namespace std;

#define      int       int64_t
#define      fastIO    ios_base::sync_with_stdio(false),cin.tie(NULL);
#define      nline     '\n'
#define      len       size()

void lets_play() {
  int a, b;
  cin >> a >> b;
  string s ;
  while( a != 0 && b != 0) {
    s = s + '0';
    a--;
    s = s + '1';
    b--;
  }
  if(b != 0) {
    while(b != 0) {
        s = s + '1';
        b--;
    }
  }
  else if(a != 0) {
    while(a != 0) {
        s = s + '0';
        a--;
    }
  }
  cout << s << endl;
  return ;


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
