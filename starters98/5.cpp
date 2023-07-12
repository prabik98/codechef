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

    int t;
    cin>>t;
    while(t--){
        int l;
        cin>>l;
        string input;
        cin>>input;
        bool flag = false;
        if (l % 3 == 1) {
            cout << "Yes\n";
            continue;
        }
        for (char ch = 'a'; ch <= 'z'; ch++) {
            int start = l + 1, end = -1;
            for (int i = 0; i < l; i++) {
                if (i % 3 == 0 && input[i] == ch) {
                    start = i;
                    break;
                }
            }
            for (int i = l - 1; i >= 0; i--) {
                int x = l - 1 - i;
                if (x % 3 == 0 && input[i] == ch) {
                    end = i;
                    break;
                }
            }
            if (start < end) {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}