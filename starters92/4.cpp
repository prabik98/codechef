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

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

using namespace std; 

class FastReader { 
public: 
 FastReader() { 
 ios_base::sync_with_stdio(false); 
 cin.tie(NULL); 
 } 

string next() { 
 string s; 
 cin >> s; 
 return s; 
 } 

 int nextInt() { 
 int x; 
 cin >> x; 
 return x; 
 } 

 ll nextLong() { 
 ll x; 
 cin >> x; 
 return x; 
 } 

 double nextDouble() { 
 double x; 
 cin >> x; 
 return x; 
 } 

 string nextLine() { 
 string s; 
 getline(cin, s); 
 return s; 
 } 
}; 

bool possible(vector<ll>& counts, ll groups, ll k) { 
 ll required = groups * k; 
 for (ll i = 0; i < counts.size(); i++) { 
 ll temp = min(min(counts[i], groups), required); 
 required -= temp; 
 if (required == 0) { 
 return true; 
 } 
 } 
 return false; 
} 


int main() { 
 FastReader fr; 
 int tc = fr.nextInt(); 
 while (tc-- > 0) { 
 int n = fr.nextInt(); 
 int k = fr.nextInt(); 
 vector<ll> counts(n); 
 for (int i = 0; i < n; i++) { 
 arr[i] = fr.nextLong(); 
 } 
        ll res = 0; 
 ll l = 0; 
 ll r = 0; 
 for (ll i : counts) { 
 r += i; 
 } 
 while (l <= r) { 
 ll m = l + (r - l) / 2; 
 if (possible(counts, m, k)) { 
 l = m + 1; 
 res = max(res, m); 
 } else { 
 r = m - 1; 
 } 
 }
 cout << res << endl; 
 } 
 return 0; 
}