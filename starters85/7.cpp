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

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int main(){
    void io();

    ll t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        for (int i = 0; i < n; i++) {
            pq.push({a[i], i});
        }
        while (q--) {
        int x;
        cin >> x;
        bool flag = false;
        while (!pq.empty()) {
            auto [val, idx] = pq.top();
            pq.pop();
            if (gcd(x, val) > 1) {
                flag = true;
                cout << val << endl;
                a[idx] = -1;
                break;
            }
        }
        if (!flag) {
            auto it = min_element(a.begin(), a.end());
            cout << *it << endl;
            a[it - a.begin()] = -1;
        }
        a.erase(remove(a.begin(), a.end(), -1), a.end());
        while (!pq.empty()) {
            pq.pop();
        }
        for (int i = 0; i < a.size(); i++) {
            pq.push({a[i], i});
        }
    }
    }
    return 0;
}