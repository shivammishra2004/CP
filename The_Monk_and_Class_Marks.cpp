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
#define sz(v) sort(v.begin(),v.end())
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
template <class T, class V> void _print(map <T, V> v) {
    cerr << "[ "; for (auto i : v) {
        _print(i); cerr << " ";} cerr << "]";}
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

bool cmp(pair<string,int> a,pair<string,int> b){
    if(a.second != b.second){
        return a.second > b.second;
    }else return a.first < b.first;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //#ifndef ONLINE_JUDGE
    //freopen("input.txt","r", stdin);
    //freopen("output.txt", "w", stdout);
    //#endif
    
    int n; cin >> n;
    // map<string,int> mpp;
    // while(n--){string s;int k; cin >> s >>k; mpp[s] = k;}
    // sort(mpp.begin(),mpp.end(),sortr(mpp));

    vector<pair<string,int>> v(n);
    fl(i,n) cin >> v[i].first >> v[i].second;
    sort(v.begin(),v.end(),cmp);
    debug(v);

    // map<int,set<string>> mpp;
    // while(n--){
    //     string s;int n; cin >> s >> n;
    //     mpp[n].insert(s);
    // }


    // for(auto i = mpp.rbegin();i != mpp.rend();i++){
    //     for(auto &j:i->second){
    //         cout << j << " " << i->first << endl;
    //     }
    // }
    //     for(auto i = --mpp.end();i != mpp.begin();i--){
    //     for(auto &j:i->second){
    //         cout << j << " " << i->first << endl;
    //     }
    // }
    //     for (auto i = mpp.rbegin(); i != mpp.rend(); ++i) {
    //     // Iterate over the set of strings associated with each key
    //     for (const auto &str : i->second) {
    //         cout << str << " " << i->first << endl;
    //     }
    // }
    return 0;
}