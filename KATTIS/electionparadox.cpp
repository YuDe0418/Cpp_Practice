<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define vt(v) vector<int>v
#define vtn(v,n) vector<int> v(n)
#define input(x) for(auto &i : x) cin >> i
#define pr(pr) pair<int,int>pr
#define vtpr(vp) vector<pair<int,int>>vp
#define qu(q) queue<int>q
#define F first
#define S second
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define endl "\n"
#define Yn(x)  (x ? "Yes" : "No")
#define yn(x)  (x ? "yes" : "no")
#define YN(x)  (x ? "YES" : "NO")
#define tf(x)  (x ? "true" : "false")
#define xab(x,a,b) (x ? a : b)
#define cin(n) int n; cin >> n
#define ct(n) cout << n << endl
#define rt0 return 0
#define ctn continue
#define bk break
#define int long long

//greedy

signed main(void)
{
    IO
    int n; cin >> n;
    vtn(v,n); input(v);
    sort(v.rbegin(),v.rend());
    int a = n/2,ans = 0;
    FOR(i,0,n)
    {
        if(i < a) ans += v[i];
        else ans += v[i]/2;
    }
    ct(ans);
=======
#include <bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define vt(v) vector<int>v
#define vtn(v,n) vector<int> v(n)
#define input(x) for(auto &i : x) cin >> i
#define pr(pr) pair<int,int>pr
#define vtpr(vp) vector<pair<int,int>>vp
#define qu(q) queue<int>q
#define F first
#define S second
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define endl "\n"
#define Yn(x)  (x ? "Yes" : "No")
#define yn(x)  (x ? "yes" : "no")
#define YN(x)  (x ? "YES" : "NO")
#define tf(x)  (x ? "true" : "false")
#define xab(x,a,b) (x ? a : b)
#define cin(n) int n; cin >> n
#define ct(n) cout << n << endl
#define rt0 return 0
#define ctn continue
#define bk break
#define int long long

//greedy

signed main(void)
{
    IO
    int n; cin >> n;
    vtn(v,n); input(v);
    sort(v.rbegin(),v.rend());
    int a = n/2,ans = 0;
    FOR(i,0,n)
    {
        if(i < a) ans += v[i];
        else ans += v[i]/2;
    }
    ct(ans);
>>>>>>> 854365870cbba534c15fe99049fe9c63cba566e8
}