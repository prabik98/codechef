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

    int64 t;
    cin >> t;
    while(t--){
        int64 n, count = 0;
        cin >> n;
        
        vll bit_or(n);
        for (int x = 1; x < n; x++) {
            bit_or[x] = bit_or[x/2] | x;
        }

        for (int x = 1; x < n; x++) {
            if (n % x == 0) {
                for (int y = x; y < n; y += x) {
                    if (n % y == 0) {
                        int z = n - x - y;
                        if (z % y == 0) {
                            int bit_or_xyz = bit_or[x] | bit_or[y] | bit_or[z];
                            if (bit_or_xyz == n) {
                                count++;
                            }
                        }
                    }
                }
            }
        }

        cout<<count%(MOD)<<endl;
    }
    return 0;
}