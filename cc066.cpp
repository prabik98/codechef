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
        int64 n, count = 0, x, y, z;
        cin >> n;
        for (x = 1; x < n; x++) {
            for (y = x; y < n; y++) {
                for (z = n-y-x; z < n; z++) {
                    if(((x + y + z) == n) && ((x | y | z) == n)){
                        count++;
                    }
                }
            }
        }
        cout<<count%MOD<<endl;
    }
    return 0;
}