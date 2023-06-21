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

void io(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void find_number_of_substrings() { 
 int n, k; 
cin >> n >> k; 
string s; 
cin >> s; 

ll ans = 1; 
ll  count = 0; 
bool start = false; 
ll count2 = 0; 
 bool check = false; 

for (int i = 0; i < n; i++) { 
 if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o'|| s[i] == 'u') { 
 if (!start) { 
 if (check) { 
 count2++; 
ans = (ans * count2) % MOD; 
 } 
 } 
 count++; 
 start = true; 
 check = true; 
 count2 = 0; 
} else { 
 if (!start) { 
 count2++; 
} 
} 
 if (count == k) { 
 start = false; 
count = 0; 
} 
} 

 cout << ans << endl; 
} 

int main() { 
    void io();
int t; 
cin >> t; 
while (t > 0) { 
 find_number_of_substrings(); 
t--; 
 } 

 return 0; 
}