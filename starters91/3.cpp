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
    cin.tie(NULL); cout.tie(NULL);
}

int main(){
    void io();

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll alice=0, bob=0;
        if(s[0] == 'A'){
            alice++;
        }
        for(int i=1; i<n; i++){
            if(s[i]=='A' && s[i+1]=='A')
                alice++;
            else if(s[i]=='B' && s[i+1]=='B')
                bob++;
        }
        cout<<alice<<" "<<bob<<endl;
    }
    return 0;
}