#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

#define int long long
#define ll long long
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
//void _print(int t) { cerr << t; }
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
        int n,m;cin >> n >> m;
        int n1 = n;
        int twos = 0,fives = 0;
        while(n%2 == 0){
            twos++;
            n/=2;
        }
        while(n%5 ==0){
            fives++;
            n/=5;
        }
        int prod = 1;
        int x = 5;
        if(fives > twos){
            x = 2;
            swap(fives,twos);
        }
        n = n1;
        while(twos > fives && prod*x <= m){
            fives++;
            n*= x;
            // debug(x);
            prod*= x;
        }
        while(prod*10<=m){
            n*=10;
            prod*= 10;
        }
        if(prod==1){
            cout << n*m << endl;
        }else{
            cout << n*(m/prod) << endl;
        }
        // cerr << endl;

    }
    
    return 0;
}