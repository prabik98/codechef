#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>
#define pb push_back
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define ff first
#define ss second
#define FOR(i, a, b) for (int i = (a); i < (int)(b); ++i)

typedef vector<VI> VVI
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

void io(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int change_mod(int curr, int req) {
 int m1 = curr % 3;
 int m2 = req % 3;
 if (m1 == m2)
 return 0;
 if (m1 < m2)
 return m2 - m1;
 return m2 + (3 - m1);
}
int solver(vector<int> a) {
 int ans = 0;
 for (int i = 3; i < a.size(); i++) {
 ans += change_mod(a[i], a[i - 3]);
 a[i] = a[i - 3];
 }
 return ans;
}

void solve() {
 int n;
 cin >> n;
 vector<int> a(n);
 FOR(i, 0, n) {
    cin >> a.at(i);
 }
 VVI X;
 FOR(i, 0, 3) {
 FOR(j, 0, 3) {
 FOR(k, 0, 3) {
 if (((i + j + k) % 3) == 0)
 X.push_back({i, j, k});
 }
 }
 }
 int ans = 1e9;

 for (auto vec : X) {
 vector<int> temp = vec;
 for (auto x : a) temp.PB(x);
 ans = min(ans, solver(temp));
 }
 cout << ans << endl;
}

int main(){
    void io();

    ll t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}