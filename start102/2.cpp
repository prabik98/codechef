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
     
     vector<int> v;
     ll ans = 1;
     int mod = 1e9 + 7;
     
     for(int i=2;i<n;i+=2){
         
         char a,b,c;
         a = s[i-2];
         b = s[i-1];
         c = s[i];
         
         if(a!=b){
             if(c=='1'){
                 v.pb(2);
             }
             else{
                 v.pb(1);
             }
         }
         else if(a=='1'){
             if(c=='1'){
                 v.pb(2);
             }
             else{
                 v.pb(1);
             }
         }
         else{
             if(c=='1'){
                 v.pb(0);
             }
             else{
                 v.pb(3);
             }
         }
         
     }
     for (auto it = v.begin(); it != v.end(); ++it) {
        ans *= *it;
        ans %= mod;
    }
     cout<<ans<<endl;
    }
    return  0;
}