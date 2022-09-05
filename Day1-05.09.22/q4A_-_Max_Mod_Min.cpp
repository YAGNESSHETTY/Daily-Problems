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
#define endl "\n"
#define str(n) to_string(n)
#define binary(n) std::bitset<32>(n).to_string()
#define all(arr) arr.begin(), arr.end()
#define fastIO1 ios_base::sync_with_stdio(false)
#define fastIO2 cin.tie(NULL)
#define imax INT_MAX
#define imin INT_MIN
#define vll vector<int>
#define m(a) map<a, a>
#define pb push_back
#define setBit __builtin_popcountll
#define pi 3.14159265358979323846264338327950288419716939937510582097494459230
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define max3(a, b, c) max(c, max(a, b))
#define max4(a, b, c, d) max(d, max(c, max(a, b)))
#define mod 1000000007
#define Google(t) cout << "Case #" << t << ": ";
#define maxn 100001
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ce cout << endl
#define rep(i, a, b) for (int i = a; i < b; i++)
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

void yagnesh()
{
    int n  ; 
    cin>> n ;

    vector<int>v(n) ;
    read(v) ;

    sort(all(v)) ;

    deque<int>d ;
    for(int i = 0 ;i < n ; i++){
        d.push_back(v[i]) ;
    }

    int ans = 0 ;
    while(d.size() > 1){
        int fr = d.front() ;
        int bk = d.back() ;
        int rem = (bk%fr) ;
        d.pop_back() ;
        if(rem > 0){
            d.push_front(rem) ;
        }
        ans++ ;
    }

    cout << ans << endl ;


}

int32_t main()
{
    fastIO1;
    fastIO2;
    int t = 1;
    // cin >> t;
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