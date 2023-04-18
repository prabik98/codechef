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

int candiesleft(){
    int n, m, sum=0;
    cin>>n>>m;
    vi c(n);
    for(int i=0; i<n; i++){
        cin>>c[i];
    }
    for(int i=0; i<n; i++){
        sum += c[i];
    }
    int modulo = sum % m;
    cout<<modulo<<endl;
    return 0;
}

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        candiesleft();
    }
}