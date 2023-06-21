#include <bits/stdc++.h>
#pragma GCC optimize("unroll-loops")
using namespace std;
#define pi pair<long long , long long>
#define pii pair<long long , pair<long long , long long>>
const int maxm = 5e5 + 6;
const long long mod = 1e9+7;
const int sq = 169;
typedef long long ll;
#define pb push_back
#define fi first
#define se second
ll l,r,mid;
ll n,m;
bool isval(int mid){
 if (((mid-1)*mid)/2 < m) return 0;
 return 1;
}
bool vis[maxm] , gos[maxm];
ll darage[maxm] , ss , mm , po;
queue<int> q;
vector<int> g[maxm] , z[maxm];
ll pedaret[maxm];
multiset<ll> st , wtf , ajab;
ll rp[maxm];
pi w[maxm],ww[maxm];
//ll rw[maxm][maxm];
ll dp[maxm];
ll lft[maxm] , rgh[maxm];
map<ll,ll> mp,pm,lx,mo,om;
vector<ll> vec;
ll pw(ll x , ll y){
 ll ans = 1 , ok = x;
 while (y>0){
 if (y%2) ans*=ok , ans%=mod;
 ok*=ok,y/=2,ok%=mod;
 }
 return ans;
}
ll c(ll x , ll y){
 if (x<y) return 0ll;
 return (((dp[x]%mod)*pw(dp[x-y],mod-2)%mod) * (pw(dp[y],mod-2)%mod))%mod;
}
inline bool ch(ll x){
 bool ans = 1;
 ll ok = 0;
 if (x<10) return (x==n)|(x==m);
 while (x){
 if (x%10!=n && x%10!=m) ans = 0;
 ok += x%10;
 x/=10;
 }
 return ans;
}
ll fen[maxm];
void upd(ll x , ll y){
 for (int k=x ; k<maxm; k+=(k&k)) fen[k] += y;
}
ll fn[maxm];
vector<ll> few;
bool cmp(pi x , pi y){
 if (x.se!=y.se) return x.se>y.se;
 return x.fi<y.fi;
}

void io(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main(){
 void io();
 int t;
 cin >>t;
 while (t--){
 string s;
 cin >>n>>s;
 l = 0 , r = 0 , mid = 0 , ss = 0;

 mm = 0;
 for (int i=0; i<n; i++) mm+=(s[i]=='*');
 for (int i=0; i<s.size(); i++){
 if (s[i]=='4') ss+=l , r++ , ss %= mod;
 else if (s[i]=='0') l+=r;
 }
 mid += pw(2,mm) * ss;
 mid %= mod;
 
 l = 0 , r = 0 , ss = 0;
 for (int i=0; i<s.size(); i++){
 if (s[i]=='4') r++;
 if (s[i]=='0') l+=r;
 if (s[i]=='*') ss+= l , ss %= mod;
 }
 mid += pw(2,mm-1) * ss;
 mid %= mod;
 
 l = 0 , r = 0 , ss = 0;
 for (int i=0; i<s.size(); i++){
 if (s[i]=='4') ss+=l , r++ , ss %= mod;
 else if (s[i]=='*') l+=r;
 }
 mid += pw(2,mm-1) * ss;
 mid %= mod;

 l = 0 , r = 0 , ss = 0;
 for (int i=0; i<s.size(); i++){
 if (s[i]=='*') r++;
 if (s[i]=='0') l+=r;
 if (s[i]=='4') ss += l , ss %= mod;
 }
 mid += pw(2,mm-1) * ss;
 mid %= mod;

 l = 0;
 for (int i=0; i<s.size(); i++) l+=(s[i]=='*');
 l = (l*(l-1)*(l-2)/6) % mod;
 mid += pw(2,mm-3)*l;
 mid %= mod;

 l = 0 , r = 0 ,ss = 0;
 for (int i=0; i<s.size(); i++){
 if (s[i]=='*') ss += l , ss %= mod , r++;
 if (s[i]=='0') l+=r;
 }
 mid += pw(2,mm-2)*ss;
 mid%=mod;
 
 l = 0 , r = 0 , ss = 0;
 for (int i=0; i<s.size(); i++){
 if (s[i]=='4') r++;
 else if (s[i]=='*'){
 ss += l , ss %= mod;
 l += r;
 }
 }
 mid += pw(2,mm-2)*ss;
 mid%=mod;
 
 l = 0 ,r = 0 , ss = 0;
 for (int i=0; i<s.size(); i++){
 if (s[i]=='4') ss += l , ss %= mod;
 else if (s[i]=='*'){
 l += r;
 r++;
 }
 }
 mid += pw(2,mm-2)*ss;
 mid%=mod;
 cout<<mid<<endl;
 }
}