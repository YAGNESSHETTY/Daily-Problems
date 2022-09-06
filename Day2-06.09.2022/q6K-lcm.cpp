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

void yagnesh()
{
    int n , k ;
    cin >> n >> k ;
     
    for(int i = 0 ; i < k-3 ; i++){
        cout << 1 << " " ;
    }

    int rem = n-k+3 ;

    if(rem%2){
        cout << 1 << " " << (rem)/2 << " " << (rem)/2 << endl ;
    }
    else if(rem%4 == 0){
        cout << rem/2 << " " << rem/4 << " " << rem/4 << endl ;
    }
    else{
        cout << (rem-1)/2 << " " << (rem-1)/2 << " " << 2 << endl ;
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