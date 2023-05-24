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

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n>0 && n<11)
            cout<<"Lower Double"<<endl;
        if(n>10 && n<16)
            cout<<"Lower Single"<<endl;
        if(n>15 && n<26)
            cout<<"Upper Double"<<endl;
        if(n>25 && n<31)
            cout<<"Upper Single"<<endl;
    }

    return 0;
}