#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>

using namespace std;
// using namespace __gnu_pbds;

#define int            long long int
#define F              first
#define S              second
#define pb             push_back
#define si             set <int>
#define vi             vector <int>
#define pii            pair <int, int>
#define vpi            vector <pii>
#define vpp            vector <pair<int, pii>>
#define mii            map <int, int>
#define mpi            map <pii, int>
#define spi            set <pii>
#define endl           "\n"
#define MOD            1000000007
#define INF            1e18
#define sz(x)          ((int) x.size())
#define all(p)         p.begin(), p.end()
#define double         long double
#define que_max        priority_queue <int>
#define que_min        priority_queue <int, vi, greater<int>>
#define bug(...)       __f (#__VA_ARGS__, __VA_ARGS__)
// typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;
// mt19937 rng(chrono::high_resolution_clock::now().time_since_epoch().count());

void _print(int t) {cerr << t;}
template <class T> void _print(vector <T> v) {for (T i : v) {_print(i); cerr << " ";} cerr << "\n";}

template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cerr << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args) {
    const char* comma = strchr (names + 1, ',');
    cerr.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}

const int N = 200005;

// You are never a loser until you quit trying.
void solve() {
    
}

int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    // clock_t z = clock();

    int T = 1;
    cin >> T;
    for(int i = 1; i <= T; i++) {
        // clock_t zz = clock() - z;
        // if((double)zz / CLOCKS_PER_SEC > 0.9) break;
        // cout << "Case #" << i << ": ";
        solve();
    }
    // cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC) << endl;
    return 0;
}