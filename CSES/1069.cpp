<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define vt(v) vector<int>v;
#define pr(pr) pair<int,int>pr;
#define vtpr(vp) vector<pair<int,int>>vp;
#define F first
#define S second
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define endl "\n"
#define Yn(x)  (x ? "Yes" : "No")
#define yn(x)  (x ? "yes" : "no")
#define YN(x)  (x ? "YES" : "NO")
#define tf(x)  (x ? "true" : "false")
#define xab(x,a,b) (x ? a : b)
#define cin(n) int n; cin >> n;
#define ct(n) cout << n << endl;
#define rt0 return 0;
#define ctn continue;
#define bk break;



signed main(void)
{
    IO
    string s; cin >> s;
    int ans=0,sum=1;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == s[i+1]) sum++;
        else sum = 1;
        ans = max(ans,sum);
    }
    ct(ans)
=======
#include <bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define vt(v) vector<int>v;
#define pr(pr) pair<int,int>pr;
#define vtpr(vp) vector<pair<int,int>>vp;
#define F first
#define S second
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define endl "\n"
#define Yn(x)  (x ? "Yes" : "No")
#define yn(x)  (x ? "yes" : "no")
#define YN(x)  (x ? "YES" : "NO")
#define tf(x)  (x ? "true" : "false")
#define xab(x,a,b) (x ? a : b)
#define cin(n) int n; cin >> n;
#define ct(n) cout << n << endl;
#define rt0 return 0;
#define ctn continue;
#define bk break;



signed main(void)
{
    IO
    string s; cin >> s;
    int ans=0,sum=1;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == s[i+1]) sum++;
        else sum = 1;
        ans = max(ans,sum);
    }
    ct(ans)
>>>>>>> 854365870cbba534c15fe99049fe9c63cba566e8
}