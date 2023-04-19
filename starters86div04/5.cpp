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

        string s;
        cin >> s;
        ll n = s.size();
        ll cnt0 = 0, cnt1 = 0;
        for (char c : s) {
            if (c == '0') {
                cnt0++;
            } else {
                cnt1++;
            }
        }
        if((cnt0 == 0 && cnt1 == n) || (cnt0 == n && cnt1 == 0)){
            cout << "Ramos"<< endl;
        }
            

        if (n%2==0){
            if(cnt0%2 == 0)
                cout << "Ramos" << endl;
            else cout << "Zlatan" << endl;
        }
        else{
                cout << "Ramos" << endl;
        }
    }
    return 0;
}