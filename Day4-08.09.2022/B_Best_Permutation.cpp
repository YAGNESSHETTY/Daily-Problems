// chaddi_gang_leader
#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define pbds tree<int, null_type, less<int>,  rb_tree_tag, tree_order_statistics_node_update> pbds Set;
#define ccmkl cout << "code copy mat kr lvde" << endl 
#define ckmkc cout << "cheaters ki maa ki ...." << endl 
#define int int64_t
#define ll long long
#define endl "\n"
#define str(n) to_string(n)
#define binary(n) std::bitset<32>(n).to_string()
#define all(arr) arr.begin(), arr.end()
#define fastIO1 ios_base::sync_with_stdio(false)
#define fastIO2 cin.tie(NULL)
#define pb push_back
#define setBit __builtin_popcountll
#define pi 3.14159265358979323846264338327950288419716939937510582097494459230
#define Google(t) cout << "Case #" << t << ": ";
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ce cout << endl
#define mem1(a) memset(a, -1, sizeof(a))
#define mem0(a) memset(a, 0, sizeof(a))
void read(vector<int> &a);
void read(vector<string> &a);
void read(vector<vector<int>> &a);
void read(vector<pair<int, int>> &a);
void read2(vector<pair<int, int>> &a);
vector<vector<int>> transpose(vector<vector<int>> &a);
void print(vector<int> &x);
void print(vector<string> &x);
void print(vector<vector<int>> &x);
void print(vector<pair<int, int>> &x);
void print2(vector<pair<int, int>> &x);
void print(vector<vector<pair<int, int>>> &x);
const int N = 1e7 + 7;
#define MOD 1000000007
#define MOD1 998244353
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
ll lcm(ll  a, ll b){ return (a/__gcd(a,b))*b ; }
bool prime(int n){   if(n<0){return false;}
    for(int i =2;i*i<n;i++){
        if(n%i == 0){return false;}}
    return true;}
bool palindrome(int n){    int r,sum = 0,k;k = n;
    while(n>0){r = n%10;sum = sum * 10 + r;n = n/10;}
    if( k == sum){return true;}
    else{ return false;} }
bool isPalindrome(string S){ for (int i = 0;i <S.length() / 2; i++) {
        if (S[i] != S[S.length() - i - 1]) { return false; }}
    return true;}
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
void extendgcd(ll a, ll b, ll*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
ll mminv(ll a, ll b) {ll arr[3]; extendgcd(a, b, arr); return arr[0];} //for non prime b
ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
bool revsort(ll a, ll b) {return a > b;}
ll combination(ll n, ll r, ll m, ll *fact, ll *ifact) {ll val1 = fact[n]; ll val2 = ifact[n - r]; ll val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}
void google(int t) {cout << "Case #" << t << ": ";}
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
ll phin(ll n) {ll number = n; if (n % 2 == 0) {number /= 2; while (n % 2 == 0) n /= 2;} for (ll i = 3; i <= sqrt(n); i += 2) {if (n % i == 0) {while (n % i == 0)n /= i; number = (number / i * (i - 1));}} if (n > 1)number = (number / n * (n - 1)) ; return number;} //O(sqrt(N))
/*--------------------------------------------------------------------------------------------------------------------------*/
void yagnesh()
{
    int n ;
    cin >> n ;

    if(n%2){
        for(int i = n-2 ; i >=4 ; i--){
            cout << i << " " ;
        }
        cout << 1 << " " << 2 << " " << 3 << " " << (n-1) << " " << (n) << endl ;
    }
    else{
        for(int i = n-2 ; i >=1 ;i--){
            cout << i << " " ;
        }
        cout << (n-1) << " " << n << endl ;
    }



}

int32_t main()
{
    fastIO1;
    fastIO2;
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        // Google(tt);
        yagnesh();
    }

    return 0;
}

void read(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
        cin >> a[i];
}
void read(vector<string> &a)
{
    for (int i = 0; i < a.size(); i++)
        cin >> a[i];
}
void read(vector<vector<int>> &a)
{
    for (int i = 0; i < a.size(); i++)
        for (int j = 0; j < a[i].size(); j++)
            cin >> a[i][j];
}
void read(vector<pair<int, int>> &a)
{
    for (int i = 0; i < a.size(); i++)
        cin >> a[i].first >> a[i].second;
}
void read2(vector<pair<int, int>> &a)
{
    for (int i = 0; i < a.size(); i++)
        cin >> a[i].first;
    for (int i = 0; i < a.size(); i++)
        cin >> a[i].second;
}
vector<vector<int>> transpose(vector<vector<int>> &a)
{
    int n = a.size();
    int m = a[0].size();
    vector<vector<int>> ret(m, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            ret[j][i] = a[i][j];
        }
    }
    return ret;
}
void print(vector<int> &x)
{
    for (auto y : x)
        cout << y << " ";
    cout << endl;
}
void print(vector<string> &x)
{

    for (auto y : x)
        cout << y << " ";
    cout << endl;
}
void print(vector<vector<int>> &x)
{
    for (auto y : x)
    {
        for (auto z : y)
            cout << z << " ";
        cout << endl;
    }
}
void print(vector<pair<int, int>> &x)
{

    for (auto y : x)
        cout << y.first << " " << y.second << endl;
}
void print2(vector<pair<int, int>> &x)
{

    for (auto y : x)
        cout << y.first << " ";
    ce;
    for (auto y : x)
        cout << y.first << " ";
    ce;
}
void print(vector<vector<pair<int, int>>> &x)
{
    for (auto y : x)
    {
        for (auto z : y)
        {
            cout << "{" << z.first << "," << z.second << "} ";
        }
        ce;
    }
}