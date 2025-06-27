#include <bits/stdc++.h>
#define rep(i,n) for (long long i = 0; i < n; ++i)
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define back(v) v.rbegin(),v.rend()
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define pll pair<ll,ll>
#define llrp(x,y) ((ll)round(pow(x,y)))
#define coutyes cout << "YES" << endl
#define coutno cout << "NO" << endl
#define endl '\n'
using namespace std;
using ll = long long;
using ld = long double;
 

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
        int n;cin >> n;
        vector<pair<int,int>> v;
        while(n--){
            int k;cin >> k;
            int size = k;
            int maxi = 0;
            int i = 0;
            while(k--){
                int x;cin >> x;
                x-=i;
                maxi = max(maxi,x);
                i++;
            }
            v.push_back({maxi,size});
        }
        sort(v.begin(),v.end(), [](auto i,auto j){
            if(i.first != j.first)return i.first<j.first;
            else return i.second < j.second;
        });
        // int ans = v[0].first;
        int ans = 0;
        int pwr = 0;
        for(auto p:v){
            if(pwr <=p.first){
                ans += p.first -pwr +1;
                pwr = p.first +1;
            }
            pwr += p.second;
        }
        cout << ans+1 << endl;
        // for(int i = 0;i<v.size()-1;i++){
        //     ans += max(0ll,v[i+1].first -v[i].first -v[i].second);
        // }
        // cout << ans << endl;
        debug(v);
    }
    
    return 0;
}