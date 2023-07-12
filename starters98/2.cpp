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

bool check(int x, int y, int z){
    int b = x;
    int a = y * z;
    if(a % b == 0)
        return true;
    else
        return false;
}

int main(){
    void io();

    ll t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        if(check(x,y,z))
            cout<<y*z<<" "<<x<<endl;
        else if(check(y,x,z))
            cout<<x*z<<" "<<y<<endl;
        else if(check(z,x,y))
            cout<<x*y<<" "<<z<<endl;
        else
            cout<<"-1"<<endl;
    }

    return 0;
}