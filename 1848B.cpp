#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

//#define int long long
#define MOD 1000000007
#define INF 1e18
#define fl(i,n) for(int i=0;i<n;i++)
#define rep(i,x,n) for(int i=x;i<n;i++)
#define sz(v) sort(v.begin(),v.end())
#define all(v) v.begin(),v.end()
#define srt(v) sort(v.begin(),v.end())
#define mxe(v) *max_element(v.begin(),v.end())
#define mne(v) *min_element(v.begin(),v.end())
#define nnia(n,v) int n; cin >> n; vector<int> v(n);for(int i=0;i<n;i++) cin >> v[i];
#define nna(n,v2) vector<int> v2(n);for(int i=0;i<n;i++) cin >> v2[i];
#define nni(x) int x; cin >> x;

void _print(long long t) { cerr << t; }
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(long double t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(unsigned long long t) { cerr << t; }

template <class T, class V> void _print(pair <T, V> p) {
    cerr << "{ "; _print(p.first); cerr << ", ";
    _print(p.second); cerr << "}";}
template <class T> void _print(vector <T> v) {
    cerr << "[ "; for (T i : v) {
        _print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {
    cerr << "[ "; for (T i : v) {
        _print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {
    cerr << "[ "; for (T i : v) {
        _print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map<T, V> v) {
    cerr << "[ ";for (const auto& i : v) {
        cerr << endl << "      ";_print(i.first); cerr << " -> ";
        _print(i.second); cerr << " ";}cerr << endl << "    ]";}
template <class T> void _print(vector<vector<T>> v) {
    cerr << "[\n"; for (const auto& i : v)
        { cerr << "  "; _print(i); cerr << "\n"; } cerr << "]"; }
template <typename T>
void myFunc(T&& value) {
    cerr << value << ' ';
}
template <typename T, typename ...Ts>
void myFunc(T&& value, Ts&& ...rest) {
    cerr << value << ' ';
    myFunc(std::forward<Ts>(rest)...);
    cerr << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //#ifndef ONLINE_JUDGE
    //freopen("input.txt","r", stdin);
    //freopen("output.txt", "w", stdout);
    //#endif
    
    int t;cin >> t;
    while(t--){
        int n,k;cin >> n >> k;
        vector<int> v(n);
        fl(i,n) cin >> v[i];
        vector<vector<int>> color(k+1);
        for(int i=0;i<n;i++){
            color[v[i]].push_back(i);
        }
        vector<vector<int>> col(k+1);

        for(int i=1;i<=k;i++){
            for(int j=0;j<color[i].size()-1;j++){
                col[i].push_back(color[i][j+1] - color[i][j]-1);
            }
        }
        debug(color);
        for(int i=1;i<col.size();i++){
            sort(col[i].begin(),col[i].end(),[](auto i,auto j){
                return i>j;
            });
        }
        // int mini = 20;
        int mini = 10000;
        for(int i=1;i<col.size();i++){
            // if(size )
            // cout << min(mini, col[i][0]/2 + col[i][1]);
        }
        cout << mini << endl;
        debug(col);
    }
    
    return 0;
}