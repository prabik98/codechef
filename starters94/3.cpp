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
        ll n;
        int var, ans, a, b;
        a = b = INT_MIN;
        ans = 0;
        for(int i=0; i<n; i++){
            cin>>var;
            if(var!=0)
                ans++;
            else{
                a = max(a, ans);
                ans=0;
            }
        }
        a = max(a, ans);
        ans=0;

        for(int i=0; i<n; i++){
            cin>>var;
            if(var!=0)
                ans++;
            else{
                b = max(b, ans);
                ans=0;
            }
        }
        b = max(b, ans);
        if(a>b)
            cout<<"OM"<<endl;
        else if(a==b)
            cout<<"DRAW"<<endl;
        else
            cout<<"ADDY"<<endl;
    }

    return 0;
}