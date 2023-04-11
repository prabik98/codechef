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

int binaryToDecimal(string binaryString){
    int n = binaryString.length();
    int decimal = 0, power = 1;
    for (int i = n-1; i >= 0; i--){
        if(binaryString[i] == '1')
            decimal += power;
        power *= 2; 
    }
    return decimal;
}

string decimalToBinary(int decimal){
    string binary = "";
    if(decimal==0){
        return "0";
    }
    while(decimal > 0){
        if (decimal % 2 == 0) binary = "0" + binary;
        else binary = "1" + binary;
        decimal /= 2;
    }
    return binary;
}

int main(){
    void io();

    // string  binaryString = "10101";
    // int decimal = binaryToDecimal(binaryString);
    // cout << decimal << endl;

    int decimal = 21;
    string binary = decimalToBinary(decimal);
    cout << binary << endl;

    return 0;
}