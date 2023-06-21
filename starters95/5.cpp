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
    int n;
    cin >> n;
    vi cnt(64, 0);
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        int k=0;
        while(x>0){
            k++;
            x>>=1;
        }
        cnt[k]++;
    }
    int maxi=-1;
    for(int i=63; i>=0; i--){
        if(cnt[i]>0)
        {
            maxi=i;
            break;
        }
    }
    cnt[maxi]--;
    cout<<1+(cnt[maxi]+2-1)/2<<n1;
}

int main(){
    void io();

    ll t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}