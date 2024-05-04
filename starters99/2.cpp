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
        int x,y,r;
        cin>>x>>y>>r;
        int count = r/30;

        if((count + x) % y == 0){
            cout<<(count + x) / y<<endl;
        }
        else{
            cout<<((count + x) / y)+1<<endl;
        }
    }

    return 0;
}