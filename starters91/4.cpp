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

// Function to calculate the greatest common divisor (GCD)
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void printPermutation(vector<int>& permutation) {
    for (int i = 0; i < permutation.size(); i++) {
        cout << permutation[i] << " ";
    }
    cout << endl;
}

// Function to generate the lexicographically largest permutation
void generatePermutation(int N) {
    // If N is 1, the permutation would be 1
    if (N == 1) {
        cout << 1 << endl;
        return;
    }

    // If N is 2 or 3, no solution exists
    if (N == 2 || N == 3) {
        cout << -1 << endl;
        return;
    }

    // Generate the permutation
    vector<int> permutation(N);

    // Fill even indices with N, N-2, N-4, ...
    for (int i = 0; i < N; i += 2) {
        permutation[i] = N - i / 2;
    }

    // Fill odd indices with N-1, N-3, N-5, ...
    int value = N - 1;
    for (int i = 1; i < N; i += 2) {
        permutation[i] = value;
        value -= 2;
    }

    // Print the lexicographically largest permutation
    printPermutation(permutation);
}

int main(){
    void io();

    int t;
    cin>>t;
    while(t--){
        int N;
        cin >> N;
        generatePermutation(N);
    }

    return 0;
}