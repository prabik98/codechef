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
        int64 x, y;
        cin >> x>>y;
        float n=0;
        int64 a = 8*x - 8*y + 1;
        n = 0.5 * (-1 + pow(a, 0.5));

        cout<<ceil(n)<<endl;
    }
    return 0;
}