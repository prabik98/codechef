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

void solve(){
    ll n, b;
    cin >> n >> b;
    vll a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    // bool flag = false;
    for(int var=0; var<(1<<n); var++){
        int val=-1;
        for(int i = 0; i < n; i++){
            if(var &  (1<<i))
            {
                if(val==-1)
                    val=a[i];
                else
                    val &= a[i];
            }
        }
    }
    if(val==b){
        // found=true;
        return "YES";
    }
    return "NO";
}

int main(){
    void io();

    ll t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}