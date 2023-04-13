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

int modBigNumber(string num, ll m){
    vi vec;
    ll modi = 0;
    for (int i = 0; i < num.size(); i++) {
        int digit = num[i] - '0';
        modi = modi * 10 + digit;
        int quo = modi / m;
        vec.push_back(quo);
        modi = modi % m;       
    }
    return modi;
}

int main(){
    void io();

    ll t;
    cin >> t;
    while(t--){
        string num;
        cin>>num;
        ll m=20;
        ll modi = modBigNumber(num, m);
        cout<<modi<<endl;
    }
    return 0;
}