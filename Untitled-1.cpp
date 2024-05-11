#include <bits/stdc++.h>
#include <sstream>
#define int ll
#define mp make_pair
#define pb push_back
#define all(a) (a).begin(), (a).end()
#define floatigual(a, b) (fabs(a - b) < EPS)
#define mod(a) md(a, MOD)
#define FOR(i, n) for (int i = 0; i < (n); ++i)
#define FOR3(i, a, b) for (int i = (a); i < (b); ++i)
#define FORD(i, n) for (int i = (n) - 1; i >= 0; --i)
#define FORDD(i, a, b) for (int i = (b) - 1; i >= (a); --i)

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vlolo;

const int tam = 200010;
const int MOD = 1000000007;
const int MOD1 = 998244353;
const double DINF = 1e100;
const double EPS = 1e-9;
const double PI = acos(-1);

const int mod = 1e9 + 7;
const int p = 27;
const string cadena = "314159265358979323846264338327";




 void solve(){
     int n,k; cin>>n>>k;
     vector<pair<int, int>> values(n+4);
     int x,y;
     for(int i = 0; i <  n; i++){
         cin>>x>>y;
         values[i+1] = {x,y};
     }
     bool sePuede = true;
     for(int i = 1; i <= n; i++){
         int color = values[i].second;
         int valor = values[i].first;
     if(values[valor].second != color){
            sePuede = false;
        }
    }
    if(sePuede) cout<<"Y"<<endl;
    else cout<<"N"<<endl;
}



 signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   //int t; cin>>t; while(t--)
        solve();
    return 0;
}