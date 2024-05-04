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

int main(){
    void io();

    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi fre(n+2, 0);
        int cnt=0, mx=1;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            fre[a]++;
            if(fre[a]==1)
                cnt++;
            if(fre[a]==2){
                fre[a]=0;
                cnt--;
            }
            mx=max(mx, cnt);
        }
        cout<<mx<<endl;
    }
    return 0;
}