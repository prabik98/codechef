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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;
        int ans = 0, curr = 0;
        string x;
        x[0]=0;
        for (int i = 0; i < n; i++) {
            
            // if (s[i] == '1') curr++;
            // ans = max(ans, curr);
            // curr -= ((i+1-ans) >= 0 && s[i+1-ans] == '1');
        }

        cout << ans << endl;

    }
    return 0;
}