#include<bits/stdc++.h>
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
#define pb push_back
#define loop(n) for(long long i=0;i<n;i++)
#define rloop(n) for(long long i=n-1;i>=0;i--)

ll m=1e9+7;

ll binpow(ll a, ll b) {
 if (b == 0)
 return 1;
  ll res = binpow(a, b / 2);
 if (b % 2)
 return (res%m * res%m * a)%m;
 else
 return res%m * res%m;
}

signed main(){

 #ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output1.txt","w",stdout);
 #endif

ll t;
cin>>t;
while(t--){

ll n,k;
cin>>n>>k;

ll o=0;
o=(n+1)/2;

if(n<2*k)cout<<"NO\n";
else if(k>o)cout<<"NO\n";
else if(k==o)cout<<"YES\n";
else if((o-k)%2==0)cout<<"YES\n";
else cout<<"NO\n";

}
  return 0;
}